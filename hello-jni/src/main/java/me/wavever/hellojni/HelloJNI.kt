package me.wavever.hellojni

class HelloJNI {
    companion object {
        init {
            System.loadLibrary("hello-jni")
        }
        @JvmStatic
        external fun stringFromJNIStatic(): String
    }

    external fun stringFromJNI(): String
}