import java.util.Scanner;
public class Dogs_with_interface {

	public static void main(String[] args) {
		
		System.out.println("Hello World");
		System.out.println("Hey:");
		System.out.println("Howdy!");
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Type in dog's name:");
		
		String nameOfDog = sc.nextLine();
		
		
		System.out.println("How old is your dog?");
		
		int ageOfDog = sc.nextInt();
		
		
		Dog dog_1 = new Dog(nameOfDog, ageOfDog);
		
		if(ageOfDog == 1) 
		{
			System.out.println(dog_1.getDogname() + " is "+ dog_1.getAge() + " year old.\n");
		}
		else 
		{
			System.out.println(dog_1.getDogname() + " is "+ dog_1.getAge() + " years old.\n");
		}
		
		dog_1.poop();
		dog_1.pee();
		
		
		
		sc.close();
	}

}
