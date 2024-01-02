
public class Dog implements Structure_of_Dogs{
	private String Dogname;
	private int age;
	
	
	public Dog( String Dogname, int age) {
		this.Dogname = Dogname;
		this.age = age;
	}
	
	
	public String getDogname() {
		return Dogname;
	}
	public void setDogname(String dogname) {
		Dogname = dogname;
	}
	public void poop() {
		System.out.println(Dogname + " just pooped.\n");
	}
	
	public void pee() {
		System.out.println(Dogname +  " just peed.\n");
	}
	
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}

}
