#include <jni.h>
#include <string>
#include <android/log.h>

static const char *kTAG = "hello-jni";

// 定义宏：
// LOGI：宏的名称，当代码中使用 LOGI() 时，预处理器会将其替换为宏定义中的代码
// ...：表示宏可以接受可变数量的参数
// __VA_ARGS__：这个特殊的宏用于在宏定义中代表可变数量的参数列表。当宏被调用时，__VA_ARGS__ 将被替换为传递给宏的参数

#define LOGI(...) \
    __android_log_print(ANDROID_LOG_INFO, kTAG, __VA_ARGS__)

using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_me_wavever_hellojni_HelloJNI_stringFromJNI(JNIEnv *env, jobject thiz) {
    string msg = "String From JNI";
    LOGI("This is Log from Java_me_wavever_hellojni_HelloJNI_stringFromJNI");
    return env->NewStringUTF(msg.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_me_wavever_hellojni_HelloJNI_stringFromJNIStatic(JNIEnv *env, jclass clazz) {
    string msg = "String from JNI Static Method.";
    LOGI("This is Log from Java_me_wavever_hellojni_HelloJNI_stringFromJNIStatic");
    return env->NewStringUTF(msg.c_str());
}