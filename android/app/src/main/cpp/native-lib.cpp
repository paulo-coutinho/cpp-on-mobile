// docs
// - https://developer.android.com/ndk/guides

// c imports
#include <jni.h>

// c++ imports
#include <string>

// our function start
extern "C" JNIEXPORT /* jni convention */
jstring /* return java type from jni for c function */
JNICALL /* jni convention */

// jni convention for functions: [Java_] + [package] + [_] + [class-name] + [_] + [method-name]
Java_com_paulocoutinho_cpponmobile_MainActivity_stringFromJNI(
        JNIEnv *env, /* jni convention */
        jobject /* this */ /* jni convention */
) {
    // function body using C or C++ code
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
