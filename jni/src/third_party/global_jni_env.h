// Generated from an annotated version of jni.h provided in Android NDK.
// (NDK Version 23.1.7779620)
// The license for original file is provided below:

/*
   * Copyright (C) 2006 The Android Open Source Project
   *
   * Licensed under the Apache License, Version 2.0 (the "License");
   * you may not use this file except in compliance with the License.
   * You may obtain a copy of the License at
   *
   *      http://www.apache.org/licenses/LICENSE-2.0
   *
   * Unless required by applicable law or agreed to in writing, software
   * distributed under the License is distributed on an "AS IS" BASIS,
   * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   * See the License for the specific language governing permissions and
   * limitations under the License.
   */

#include <jni.h>
/// Wrapper over JNIEnv in the JNI API, which can be used from multiple Dart
/// Threads.
///
/// It consists of wrappers to JNIEnv methods which manage the thread-local
/// JNIEnv pointer in C code. Additionally, any returned local reference value
/// is converted to global reference.
///
/// For the documentation on methods themselves, see the JNI Specification at
/// https://docs.oracle.com/javase/7/docs/technotes/guides/jni/spec/functions.html
///
/// Apart from the specification, the Android NDK's JNI page consists of useful
/// information about using the JNI:
/// https://developer.android.com/training/articles/perf-jni
typedef struct GlobalJniEnv {
  jint (*GetVersion)();
  jclass (*DefineClass)(const char* name,
                        jobject loader,
                        const jbyte* buf,
                        jsize bufLen);
  jclass (*FindClass)(const char* name);
  jmethodID (*FromReflectedMethod)(jobject method);
  jfieldID (*FromReflectedField)(jobject field);
  jobject (*ToReflectedMethod)(jclass cls,
                               jmethodID methodId,
                               jboolean isStatic);
  jclass (*GetSuperclass)(jclass clazz);
  jboolean (*IsAssignableFrom)(jclass clazz1, jclass clazz2);
  jobject (*ToReflectedField)(jclass cls, jfieldID fieldID, jboolean isStatic);
  jint (*Throw)(jthrowable obj);
  jint (*ThrowNew)(jclass clazz, const char* message);
  jthrowable (*ExceptionOccurred)();
  void (*ExceptionDescribe)();
  void (*ExceptionClear)();
  void (*FatalError)(const char* msg);
  jint (*PushLocalFrame)(jint capacity);
  jobject (*PopLocalFrame)(jobject result);
  jobject (*NewGlobalRef)(jobject obj);
  void (*DeleteGlobalRef)(jobject globalRef);
  jboolean (*IsSameObject)(jobject ref1, jobject ref2);
  jint (*EnsureLocalCapacity)(jint capacity);
  jobject (*AllocObject)(jclass clazz);
  jobject (*NewObject)(jclass arg1, jmethodID arg2);
  jobject (*NewObjectA)(jclass clazz, jmethodID methodID, const jvalue* args);
  jclass (*GetObjectClass)(jobject obj);
  jboolean (*IsInstanceOf)(jobject obj, jclass clazz);
  jmethodID (*GetMethodID)(jclass clazz, const char* name, const char* sig);
  jobject (*CallObjectMethod)(jobject arg1, jmethodID arg2);
  jobject (*CallObjectMethodA)(jobject obj,
                               jmethodID methodID,
                               const jvalue* args);
  jboolean (*CallBooleanMethod)(jobject arg1, jmethodID arg2);
  jboolean (*CallBooleanMethodA)(jobject obj,
                                 jmethodID methodId,
                                 const jvalue* args);
  jbyte (*CallByteMethod)(jobject arg1, jmethodID arg2);
  jbyte (*CallByteMethodA)(jobject obj, jmethodID methodID, const jvalue* args);
  jchar (*CallCharMethod)(jobject arg1, jmethodID arg2);
  jchar (*CallCharMethodA)(jobject obj, jmethodID methodID, const jvalue* args);
  jshort (*CallShortMethod)(jobject arg1, jmethodID arg2);
  jshort (*CallShortMethodA)(jobject obj,
                             jmethodID methodID,
                             const jvalue* args);
  jint (*CallIntMethod)(jobject arg1, jmethodID arg2);
  jint (*CallIntMethodA)(jobject obj, jmethodID methodID, const jvalue* args);
  jlong (*CallLongMethod)(jobject arg1, jmethodID arg2);
  jlong (*CallLongMethodA)(jobject obj, jmethodID methodID, const jvalue* args);
  jfloat (*CallFloatMethod)(jobject arg1, jmethodID arg2);
  jfloat (*CallFloatMethodA)(jobject obj,
                             jmethodID methodID,
                             const jvalue* args);
  jdouble (*CallDoubleMethod)(jobject arg1, jmethodID arg2);
  jdouble (*CallDoubleMethodA)(jobject obj,
                               jmethodID methodID,
                               const jvalue* args);
  void (*CallVoidMethod)(jobject arg1, jmethodID arg2);
  void (*CallVoidMethodA)(jobject obj, jmethodID methodID, const jvalue* args);
  jobject (*CallNonvirtualObjectMethod)(jobject arg1,
                                        jclass arg2,
                                        jmethodID arg3);
  jobject (*CallNonvirtualObjectMethodA)(jobject obj,
                                         jclass clazz,
                                         jmethodID methodID,
                                         const jvalue* args);
  jboolean (*CallNonvirtualBooleanMethod)(jobject arg1,
                                          jclass arg2,
                                          jmethodID arg3);
  jboolean (*CallNonvirtualBooleanMethodA)(jobject obj,
                                           jclass clazz,
                                           jmethodID methodID,
                                           const jvalue* args);
  jbyte (*CallNonvirtualByteMethod)(jobject arg1, jclass arg2, jmethodID arg3);
  jbyte (*CallNonvirtualByteMethodA)(jobject obj,
                                     jclass clazz,
                                     jmethodID methodID,
                                     const jvalue* args);
  jchar (*CallNonvirtualCharMethod)(jobject arg1, jclass arg2, jmethodID arg3);
  jchar (*CallNonvirtualCharMethodA)(jobject obj,
                                     jclass clazz,
                                     jmethodID methodID,
                                     const jvalue* args);
  jshort (*CallNonvirtualShortMethod)(jobject arg1,
                                      jclass arg2,
                                      jmethodID arg3);
  jshort (*CallNonvirtualShortMethodA)(jobject obj,
                                       jclass clazz,
                                       jmethodID methodID,
                                       const jvalue* args);
  jint (*CallNonvirtualIntMethod)(jobject arg1, jclass arg2, jmethodID arg3);
  jint (*CallNonvirtualIntMethodA)(jobject obj,
                                   jclass clazz,
                                   jmethodID methodID,
                                   const jvalue* args);
  jlong (*CallNonvirtualLongMethod)(jobject arg1, jclass arg2, jmethodID arg3);
  jlong (*CallNonvirtualLongMethodA)(jobject obj,
                                     jclass clazz,
                                     jmethodID methodID,
                                     const jvalue* args);
  jfloat (*CallNonvirtualFloatMethod)(jobject arg1,
                                      jclass arg2,
                                      jmethodID arg3);
  jfloat (*CallNonvirtualFloatMethodA)(jobject obj,
                                       jclass clazz,
                                       jmethodID methodID,
                                       const jvalue* args);
  jdouble (*CallNonvirtualDoubleMethod)(jobject arg1,
                                        jclass arg2,
                                        jmethodID arg3);
  jdouble (*CallNonvirtualDoubleMethodA)(jobject obj,
                                         jclass clazz,
                                         jmethodID methodID,
                                         const jvalue* args);
  void (*CallNonvirtualVoidMethod)(jobject arg1, jclass arg2, jmethodID arg3);
  void (*CallNonvirtualVoidMethodA)(jobject obj,
                                    jclass clazz,
                                    jmethodID methodID,
                                    const jvalue* args);
  jfieldID (*GetFieldID)(jclass clazz, const char* name, const char* sig);
  jobject (*GetObjectField)(jobject obj, jfieldID fieldID);
  jboolean (*GetBooleanField)(jobject obj, jfieldID fieldID);
  jbyte (*GetByteField)(jobject obj, jfieldID fieldID);
  jchar (*GetCharField)(jobject obj, jfieldID fieldID);
  jshort (*GetShortField)(jobject obj, jfieldID fieldID);
  jint (*GetIntField)(jobject obj, jfieldID fieldID);
  jlong (*GetLongField)(jobject obj, jfieldID fieldID);
  jfloat (*GetFloatField)(jobject obj, jfieldID fieldID);
  jdouble (*GetDoubleField)(jobject obj, jfieldID fieldID);
  void (*SetObjectField)(jobject obj, jfieldID fieldID, jobject val);
  void (*SetBooleanField)(jobject obj, jfieldID fieldID, jboolean val);
  void (*SetByteField)(jobject obj, jfieldID fieldID, jbyte val);
  void (*SetCharField)(jobject obj, jfieldID fieldID, jchar val);
  void (*SetShortField)(jobject obj, jfieldID fieldID, jshort val);
  void (*SetIntField)(jobject obj, jfieldID fieldID, jint val);
  void (*SetLongField)(jobject obj, jfieldID fieldID, jlong val);
  void (*SetFloatField)(jobject obj, jfieldID fieldID, jfloat val);
  void (*SetDoubleField)(jobject obj, jfieldID fieldID, jdouble val);
  jmethodID (*GetStaticMethodID)(jclass clazz,
                                 const char* name,
                                 const char* sig);
  jobject (*CallStaticObjectMethod)(jclass arg1, jmethodID arg2);
  jobject (*CallStaticObjectMethodA)(jclass clazz,
                                     jmethodID methodID,
                                     const jvalue* args);
  jboolean (*CallStaticBooleanMethod)(jclass arg1, jmethodID arg2);
  jboolean (*CallStaticBooleanMethodA)(jclass clazz,
                                       jmethodID methodID,
                                       const jvalue* args);
  jbyte (*CallStaticByteMethod)(jclass arg1, jmethodID arg2);
  jbyte (*CallStaticByteMethodA)(jclass clazz,
                                 jmethodID methodID,
                                 const jvalue* args);
  jchar (*CallStaticCharMethod)(jclass arg1, jmethodID arg2);
  jchar (*CallStaticCharMethodA)(jclass clazz,
                                 jmethodID methodID,
                                 const jvalue* args);
  jshort (*CallStaticShortMethod)(jclass arg1, jmethodID arg2);
  jshort (*CallStaticShortMethodA)(jclass clazz,
                                   jmethodID methodID,
                                   const jvalue* args);
  jint (*CallStaticIntMethod)(jclass arg1, jmethodID arg2);
  jint (*CallStaticIntMethodA)(jclass clazz,
                               jmethodID methodID,
                               const jvalue* args);
  jlong (*CallStaticLongMethod)(jclass arg1, jmethodID arg2);
  jlong (*CallStaticLongMethodA)(jclass clazz,
                                 jmethodID methodID,
                                 const jvalue* args);
  jfloat (*CallStaticFloatMethod)(jclass arg1, jmethodID arg2);
  jfloat (*CallStaticFloatMethodA)(jclass clazz,
                                   jmethodID methodID,
                                   const jvalue* args);
  jdouble (*CallStaticDoubleMethod)(jclass arg1, jmethodID arg2);
  jdouble (*CallStaticDoubleMethodA)(jclass clazz,
                                     jmethodID methodID,
                                     const jvalue* args);
  void (*CallStaticVoidMethod)(jclass arg1, jmethodID arg2);
  void (*CallStaticVoidMethodA)(jclass clazz,
                                jmethodID methodID,
                                const jvalue* args);
  jfieldID (*GetStaticFieldID)(jclass clazz, const char* name, const char* sig);
  jobject (*GetStaticObjectField)(jclass clazz, jfieldID fieldID);
  jboolean (*GetStaticBooleanField)(jclass clazz, jfieldID fieldID);
  jbyte (*GetStaticByteField)(jclass clazz, jfieldID fieldID);
  jchar (*GetStaticCharField)(jclass clazz, jfieldID fieldID);
  jshort (*GetStaticShortField)(jclass clazz, jfieldID fieldID);
  jint (*GetStaticIntField)(jclass clazz, jfieldID fieldID);
  jlong (*GetStaticLongField)(jclass clazz, jfieldID fieldID);
  jfloat (*GetStaticFloatField)(jclass clazz, jfieldID fieldID);
  jdouble (*GetStaticDoubleField)(jclass clazz, jfieldID fieldID);
  void (*SetStaticObjectField)(jclass clazz, jfieldID fieldID, jobject val);
  void (*SetStaticBooleanField)(jclass clazz, jfieldID fieldID, jboolean val);
  void (*SetStaticByteField)(jclass clazz, jfieldID fieldID, jbyte val);
  void (*SetStaticCharField)(jclass clazz, jfieldID fieldID, jchar val);
  void (*SetStaticShortField)(jclass clazz, jfieldID fieldID, jshort val);
  void (*SetStaticIntField)(jclass clazz, jfieldID fieldID, jint val);
  void (*SetStaticLongField)(jclass clazz, jfieldID fieldID, jlong val);
  void (*SetStaticFloatField)(jclass clazz, jfieldID fieldID, jfloat val);
  void (*SetStaticDoubleField)(jclass clazz, jfieldID fieldID, jdouble val);
  jstring (*NewString)(const jchar* unicodeChars, jsize len);
  jsize (*GetStringLength)(jstring string);
  const jchar* (*GetStringChars)(jstring string, jboolean* isCopy);
  void (*ReleaseStringChars)(jstring string, const jchar* isCopy);
  jstring (*NewStringUTF)(const char* bytes);
  jsize (*GetStringUTFLength)(jstring string);
  const char* (*GetStringUTFChars)(jstring string, jboolean* isCopy);
  void (*ReleaseStringUTFChars)(jstring string, const char* utf);
  jsize (*GetArrayLength)(jarray array);
  jobjectArray (*NewObjectArray)(jsize length,
                                 jclass elementClass,
                                 jobject initialElement);
  jobject (*GetObjectArrayElement)(jobjectArray array, jsize index);
  void (*SetObjectArrayElement)(jobjectArray array, jsize index, jobject val);
  jbooleanArray (*NewBooleanArray)(jsize length);
  jbyteArray (*NewByteArray)(jsize length);
  jcharArray (*NewCharArray)(jsize length);
  jshortArray (*NewShortArray)(jsize length);
  jintArray (*NewIntArray)(jsize length);
  jlongArray (*NewLongArray)(jsize length);
  jfloatArray (*NewFloatArray)(jsize length);
  jdoubleArray (*NewDoubleArray)(jsize length);
  jboolean* (*GetBooleanArrayElements)(jbooleanArray array, jboolean* isCopy);
  jbyte* (*GetByteArrayElements)(jbyteArray array, jboolean* isCopy);
  jchar* (*GetCharArrayElements)(jcharArray array, jboolean* isCopy);
  jshort* (*GetShortArrayElements)(jshortArray array, jboolean* isCopy);
  jint* (*GetIntArrayElements)(jintArray array, jboolean* isCopy);
  jlong* (*GetLongArrayElements)(jlongArray array, jboolean* isCopy);
  jfloat* (*GetFloatArrayElements)(jfloatArray array, jboolean* isCopy);
  jdouble* (*GetDoubleArrayElements)(jdoubleArray array, jboolean* isCopy);
  void (*ReleaseBooleanArrayElements)(jbooleanArray array,
                                      jboolean* elems,
                                      jint mode);
  void (*ReleaseByteArrayElements)(jbyteArray array, jbyte* elems, jint mode);
  void (*ReleaseCharArrayElements)(jcharArray array, jchar* elems, jint mode);
  void (*ReleaseShortArrayElements)(jshortArray array,
                                    jshort* elems,
                                    jint mode);
  void (*ReleaseIntArrayElements)(jintArray array, jint* elems, jint mode);
  void (*ReleaseLongArrayElements)(jlongArray array, jlong* elems, jint mode);
  void (*ReleaseFloatArrayElements)(jfloatArray array,
                                    jfloat* elems,
                                    jint mode);
  void (*ReleaseDoubleArrayElements)(jdoubleArray array,
                                     jdouble* elems,
                                     jint mode);
  void (*GetBooleanArrayRegion)(jbooleanArray array,
                                jsize start,
                                jsize len,
                                jboolean* buf);
  void (*GetByteArrayRegion)(jbyteArray array,
                             jsize start,
                             jsize len,
                             jbyte* buf);
  void (*GetCharArrayRegion)(jcharArray array,
                             jsize start,
                             jsize len,
                             jchar* buf);
  void (*GetShortArrayRegion)(jshortArray array,
                              jsize start,
                              jsize len,
                              jshort* buf);
  void (*GetIntArrayRegion)(jintArray array, jsize start, jsize len, jint* buf);
  void (*GetLongArrayRegion)(jlongArray array,
                             jsize start,
                             jsize len,
                             jlong* buf);
  void (*GetFloatArrayRegion)(jfloatArray array,
                              jsize start,
                              jsize len,
                              jfloat* buf);
  void (*GetDoubleArrayRegion)(jdoubleArray array,
                               jsize start,
                               jsize len,
                               jdouble* buf);
  void (*SetBooleanArrayRegion)(jbooleanArray array,
                                jsize start,
                                jsize len,
                                const jboolean* buf);
  void (*SetByteArrayRegion)(jbyteArray array,
                             jsize start,
                             jsize len,
                             const jbyte* buf);
  void (*SetCharArrayRegion)(jcharArray array,
                             jsize start,
                             jsize len,
                             const jchar* buf);
  void (*SetShortArrayRegion)(jshortArray array,
                              jsize start,
                              jsize len,
                              const jshort* buf);
  void (*SetIntArrayRegion)(jintArray array,
                            jsize start,
                            jsize len,
                            const jint* buf);
  void (*SetLongArrayRegion)(jlongArray array,
                             jsize start,
                             jsize len,
                             const jlong* buf);
  void (*SetFloatArrayRegion)(jfloatArray array,
                              jsize start,
                              jsize len,
                              const jfloat* buf);
  void (*SetDoubleArrayRegion)(jdoubleArray array,
                               jsize start,
                               jsize len,
                               const jdouble* buf);
  jint (*RegisterNatives)(jclass clazz,
                          const JNINativeMethod* methods,
                          jint nMethods);
  jint (*UnregisterNatives)(jclass clazz);
  jint (*MonitorEnter)(jobject obj);
  jint (*MonitorExit)(jobject obj);
  jint (*GetJavaVM)(JavaVM** vm);
  void (*GetStringRegion)(jstring str, jsize start, jsize len, jchar* buf);
  void (*GetStringUTFRegion)(jstring str, jsize start, jsize len, char* buf);
  void* (*GetPrimitiveArrayCritical)(jarray array, jboolean* isCopy);
  void (*ReleasePrimitiveArrayCritical)(jarray array, void* carray, jint mode);
  const jchar* (*GetStringCritical)(jstring str, jboolean* isCopy);
  void (*ReleaseStringCritical)(jstring str, const jchar* carray);
  jweak (*NewWeakGlobalRef)(jobject obj);
  void (*DeleteWeakGlobalRef)(jweak obj);
  jboolean (*ExceptionCheck)();
  jobject (*NewDirectByteBuffer)(void* address, jlong capacity);
  void* (*GetDirectBufferAddress)(jobject buf);
  jlong (*GetDirectBufferCapacity)(jobject buf);
  jobjectRefType (*GetObjectRefType)(jobject obj);
} GlobalJniEnv;

// Note(Mahesh): Redoing some work here, because I want these 2 files separate.
// including dartjni.h for FFI_PLUGIN_EXPORT leads to more issues.

#if _WIN32
__declspec(dllexport) GlobalJniEnv* GetGlobalEnv();
#else
GlobalJniEnv* GetGlobalEnv();
#endif