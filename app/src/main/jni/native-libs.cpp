#include <jni.h>
#include <string>

extern "C"


JNIEXPORT jstring JNICALL
Java_top_honhe_demo_cpp2_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject instance) {
    int a = 1;
    jint b = 2;
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jint JNICALL
Java_top_honhe_demo_cpp2_MainActivity_intFromJNI(JNIEnv *env, jobject instance) {
    return 3;
}