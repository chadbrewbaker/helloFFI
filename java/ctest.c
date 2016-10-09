/* ctest.c */

#include <jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_HelloWorld_helloFromC
  (JNIEnv * env, jobject jobj)
{
	    printf("Hello from C!\n");
}

/*
 *  * Class:     HelloWorld
 *   * Method:    twice
 *    * Signature: (I)I
 *     */
JNIEXPORT jint JNICALL Java_HelloWorld_twice
  (JNIEnv * env, jobject jobj, jint x){
      return x+x;
  }

/*
 *  * Class:     HelloWorld
 *   * Method:    sum
 *    * Signature: ([I)[I
 *     */
JNIEXPORT jint JNICALL Java_HelloWorld_sum
  (JNIEnv * env, jobject jobj, jintArray xs){

   jint *inCArray = (*env)->GetIntArrayElements(env, xs, NULL);
   void  *X = NULL;
   if (X == inCArray) return 0;
      jsize length = (*env)->GetArrayLength(env, xs);
  jint i,sum = 0;
  
  for(i=0;i<length;i++){
    sum += inCArray[i];
  }

   return sum;
  }


