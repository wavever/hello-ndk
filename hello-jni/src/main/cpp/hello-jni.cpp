#include <jni.h>
#include <string>

using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_me_wavever_hellojni_HelloJNI_stringFromJNI(JNIEnv *env, jobject thiz) {
    string msg = "String From JNI";
    return env->NewStringUTF(msg.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_me_wavever_hellojni_HelloJNI_stringFromJNIStatic(JNIEnv *env, jclass clazz) {
    string msg = "String from JNI Static Method.";
    return env->NewStringUTF(msg.c_str());
}