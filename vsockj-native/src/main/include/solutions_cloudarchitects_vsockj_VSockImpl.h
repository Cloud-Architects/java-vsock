/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class solutions_cloudarchitects_vsockj_VSockImpl */

#ifndef _Included_solutions_cloudarchitects_vsockj_VSockImpl
#define _Included_solutions_cloudarchitects_vsockj_VSockImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     solutions_cloudarchitects_vsockj_VSockImpl
 * Method:    socketCreate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_solutions_cloudarchitects_vsockj_VSockImpl_socketCreate
  (JNIEnv *, jobject);

/*
 * Class:     solutions_cloudarchitects_vsockj_VSockImpl
 * Method:    connect
 * Signature: (Lsolutions/cloudarchitects/vsockj/VSockAddress;)V
 */
JNIEXPORT void JNICALL Java_solutions_cloudarchitects_vsockj_VSockImpl_connect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     solutions_cloudarchitects_vsockj_VSockImpl
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_solutions_cloudarchitects_vsockj_VSockImpl_close
  (JNIEnv *, jobject);

/*
 * Class:     solutions_cloudarchitects_vsockj_VSockImpl
 * Method:    write
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_solutions_cloudarchitects_vsockj_VSockImpl_write
  (JNIEnv *, jobject, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif