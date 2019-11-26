public class Main {

    public static void main(String[] args) {
        NativeCallsClass obj = new NativeCallsClass();

        System.out.println(obj.add(5, 5));
        System.out.println(obj.getStrLength("aaabbbcc"));
        System.out.println(obj.getIntFromJNI());//return 5
        System.out.println(obj.getStringFromJNI());//return HelloWorld
    }
}
