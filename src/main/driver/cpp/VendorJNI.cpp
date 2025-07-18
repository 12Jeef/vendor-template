#include "jni.h"
#include "com_peninsula_jni_VendorJNI.h"
#include "driverheader.h"
#include <iostream>

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
    // Check to ensure the JNI version is valid

    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK)
        return JNI_ERR;

    // In here is also where you store things like class references
    // if they are ever needed

    return JNI_VERSION_1_6;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved) {}

JNIEXPORT jint JNICALL Java_com_peninsula_jni_VendorJNI_initialize
  (JNIEnv *, jclass) {
  std::cout << "Hello World from VendorJNI.cpp\n";
  c_doThing();
  return 0;
}
