tup.frule{input='src/cgles2.c', command='gcc -std=c89 -g -fPIC -pthread -shared -Wall -Iinclude -o %o %f `pkg-config --cflags --libs python-3.4m`', output='cgles2.cpython-34m.so'}
