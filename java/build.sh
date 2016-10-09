javac HelloWorld.java
#java HelloWorld
javah HelloWorld
gcc -Wall -o libctest.dylib -shared -I/Library/Java/JavaVirtualMachines/jdk1.8.0_66.jdk/Contents/Home/include/darwin/ -I/Library/Java/JavaVirtualMachines/jdk1.8.0_66.jdk/Contents/Home/include/ ctest.c -lc

