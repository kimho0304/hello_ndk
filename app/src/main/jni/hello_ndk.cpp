#include <stdio.h>

#include <jni.h>

#include<com_example_hello_ndk_MainActivity.h>

extern "C" JNIEXPORT jstring JNICALL Java_com_example_hello_1ndk_MainActivity_print_1ndk
        (JNIEnv *env, jobject thiz, jstring text) {
    return text;
}


extern "C" JNIEXPORT jbyte JNICALL
Java_com_example_hello_1ndk_PrimitiveReturned_returnedChar(JNIEnv *env, jobject thiz) {
    // TODO: implement returnedChar()
    char c = 'a';

    return (jbyte) c;
}


extern "C" JNIEXPORT jchar JNICALL
Java_com_example_hello_1ndk_PrimitiveReturned_returnedUnsignedChar(JNIEnv *env, jobject thiz) {
    // TODO: implement returnedUnsignedChar()

    unsigned char uc = 'a';

    return uc;

}


extern "C" JNIEXPORT jshort JNICALL Java_com_example_hello_1ndk_PrimitiveReturned_returnedShort(JNIEnv *env, jobject obj) {

    short s = 257;

    return s;

}


extern "C" JNIEXPORT jint JNICALL
Java_com_example_hello_1ndk_PrimitiveReturned_returnedUnsignedShort(JNIEnv *env, jobject obj) {

    unsigned short s = 30000;


    return s;

}


extern "C" JNIEXPORT jint JNICALL Java_com_example_hello_1ndk_PrimitiveReturned_returnedInt(JNIEnv *env, jobject obj) {

    int i = -70000;

    return i;

}


extern "C" JNIEXPORT jlong JNICALL
Java_com_example_hello_1ndk_PrimitiveReturned_returnedUnsignedInt(JNIEnv *env, jobject obj) {

    unsigned int ui = 123456789;

    return ui;

}


extern "C" JNIEXPORT jint JNICALL Java_com_example_hello_1ndk_PrimitiveReturned_returnedLong(JNIEnv *env, jobject obj) {

    long l = 100000L;

    return l;

}


extern "C" JNIEXPORT jlong JNICALL
Java_com_example_hello_1ndk_PrimitiveReturned_returnedUnsignedLong(JNIEnv *env, jobject obj) {

    //ul = power(2,31) +1

    unsigned long ul = 1;

    for (int i = 1; i <= 31; i++) {

        ul = ul * 2;

    }

    ul = ul + 1;


    return ul;

}


extern "C" JNIEXPORT jfloat JNICALL Java_com_example_hello_1ndk_PrimitiveReturned_returnedFloat(JNIEnv *env, jobject obj) {

    float f = 10.2f;

    return f;

}


extern "C" JNIEXPORT jdouble JNICALL Java_com_example_hello_1ndk_PrimitiveReturned_returnedDouble(JNIEnv *env, jobject obj) {

    double d = 100000.123;

    return d;

}


extern "C" JNIEXPORT jlong JNICALL Java_com_example_hello_1ndk_PrimitiveReturned_returnedLongLong(JNIEnv *env, jobject obj) {

    //ll = power(2,33)

    long long ll = 1;

    for (int i = 1; i <= 33; i++) {

        ll = ll * 2;

    }


    return ll;

}