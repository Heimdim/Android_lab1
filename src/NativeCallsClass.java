public class NativeCallsClass {
    static {
        System.loadLibrary("NativeCallsClass");
    }

    // java - c++
    public native int add(int a, int b);

    public native int getStrLength(String s);

    // c++ - java

    public  native int getIntFromJNI();

    public native String getStringFromJNI();
}
