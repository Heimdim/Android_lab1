/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <cstring>
/* Header for class NativeCallsClass */

#ifndef _Included_NativeCallsClass
#define _Included_NativeCallsClass
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     NativeCallsClass
 * Method:    add
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_NativeCallsClass_add
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     NativeCallsClass
 * Method:    getStrLength
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_NativeCallsClass_getStrLength
  (JNIEnv *, jobject, jstring);

/*
 * Class:     NativeCallsClass
 * Method:    getIntFromJNI
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_NativeCallsClass_getIntFromJNI
  (JNIEnv *, jobject);

/*
 * Class:     NativeCallsClass
 * Method:    getStringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_NativeCallsClass_getStringFromJNI
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
