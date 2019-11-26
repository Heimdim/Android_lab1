#include "NativeCallsClass.h"
#include <string>

JNIEXPORT jint JNICALL Java_NativeCallsClass_add
  (JNIEnv *env, jobject instance, jint a, jint b)
{
	return a+b;
}

JNIEXPORT jint JNICALL Java_NativeCallsClass_getStrLength
  (JNIEnv *env, jobject instance, jstring str)
{
	const char *s = env->GetStringUTFChars(str, 0);

	jint len = strlen(s);

	env->ReleaseStringUTFChars(str, s);
	return len;
}

JNIEXPORT jint JNICALL Java_NativeCallsClass_getIntFromJNI
  (JNIEnv *enb, jobject instance)
  {
    return 5;
  }

JNIEXPORT jstring JNICALL Java_NativeCallsClass_getStringFromJNI
  (JNIEnv *env, jobject instance)
  {
    char array[]="HelloWorld";
    char* helloString =array;
    return env->NewStringUTF(helloString);
  }