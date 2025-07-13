import com.peninsula.jni.VendorJNI;

public class Test {
	@org.junit.jupiter.api.Test
	public void test() {
		VendorJNI.forceLoad();
		VendorJNI.initialize();
	}
}
