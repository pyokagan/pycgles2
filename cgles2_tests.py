import unittest
import cgles2
import csdl2
import array
from csdl2 import *
from cgles2 import *


class TestContext(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        SDL_InitSubSystem(SDL_INIT_VIDEO)

    @classmethod
    def tearDownClass(cls):
        SDL_QuitSubSystem(SDL_INIT_VIDEO)

    def test_init(self):
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                            SDL_GL_CONTEXT_PROFILE_ES)
        win = SDL_CreateWindow('cgles2_tests', -16, -16, 16, 16,
                               SDL_WINDOW_OPENGL)
        glctx = SDL_GL_CreateContext(win)

        def make_current():
            SDL_GL_MakeCurrent(win, glctx)

        def get_proc_address(proc):
            return SDL_GL_GetProcAddress(proc)

        ctx = Context(make_current, get_proc_address)

    def test_init_not_es(self):
        """An exception should be raised when Context is not OpenGL ES"""
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, 0)
        win = SDL_CreateWindow('cgles2_tests', -16, -16, 16, 16,
                               SDL_WINDOW_OPENGL)
        glctx = SDL_GL_CreateContext(win)

        def make_current():
            SDL_GL_MakeCurrent(win, glctx)

        def get_proc_address(proc):
            return SDL_GL_GetProcAddress(proc)

        self.assertRaises(ValueError, Context, make_current, get_proc_address)


class TestES2Buffer(unittest.TestCase):
    "Test OpenGL ES2 buffer functions"

    @classmethod
    def setUpClass(cls):
        SDL_InitSubSystem(SDL_INIT_VIDEO)

    @classmethod
    def tearDownClass(cls):
        SDL_QuitSubSystem(SDL_INIT_VIDEO)

    def setUp(self):
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                            SDL_GL_CONTEXT_PROFILE_ES)
        self.win = SDL_CreateWindow('cgles2_tests', -16, -16, 16, 16,
                                    SDL_WINDOW_OPENGL)
        self.glctx = SDL_GL_CreateContext(self.win)

        def make_current():
            SDL_GL_MakeCurrent(self.win, self.glctx)

        def get_proc_address(proc):
            return SDL_GL_GetProcAddress(proc)

        self.gl = Context(make_current, get_proc_address)
        self.buf = self.gl.createBuffer()
        self.assertIsInstance(self.buf, Buffer)
        self.assertIs(self.buf.context, self.gl)
        self.assertNotEqual(self.buf.id, 0)

    def test_bind_buffer(self):
        self.gl.bindBuffer(GL_ARRAY_BUFFER, self.buf)

    def test_buffer_data(self):
        # Test with writable buffer
        arr = array.array('f', [0, 1, 0, -1, -1, 0, 1, -1, 0])
        self.gl.bindBuffer(GL_ARRAY_BUFFER, self.buf)
        self.gl.bufferData(GL_ARRAY_BUFFER, arr, GL_STATIC_DRAW)
        # Test with read-only buffer
        arr = b'abcdefghijklmnop'
        self.gl.bufferData(GL_ARRAY_BUFFER, arr, GL_STATIC_DRAW)

    def test_delete_buffer(self):
        self.gl.deleteBuffer(self.buf)
        self.assertIsNone(getattr(self.buf, 'context', None))
        self.assertEqual(self.buf.id, 0)

    def test_is_buffer(self):
        self.gl.bindBuffer(GL_ARRAY_BUFFER, self.buf)
        self.assertEqual(self.gl.isBuffer(self.buf), True)


if __name__ == '__main__':
    # Init subsystems manually here so that there is no needless
    # init/destruction of subsystems during tests
    SDL_Init(SDL_INIT_VIDEO)
    unittest.main()
