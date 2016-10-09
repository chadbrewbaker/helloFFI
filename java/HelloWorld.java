/* HelloWorld.java */

public class HelloWorld {
        native int twice(int n1);
        native int sum(int[] numbers);
	native void helloFromC(); /* (1) */
	        static {
		      System.loadLibrary("ctest"); /* (2) */
				    }
		    static public void main(String argv[]) {
			            HelloWorld helloWorld = new HelloWorld();
				            helloWorld.helloFromC(); /* (3) */
					    int x = helloWorld.twice(7);
					System.out.println(x);
					int[] xs = {22, 33, 33};
					System.out.println(helloWorld.sum(xs));					
		    }
}
