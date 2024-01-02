import java.util.Scanner;

// This program is made to store name and age. then convert human years to dog years and display them into the console.
public class App {
	public static void main(String[] args) {

		System.out.println("Hello.");
		Scanner sc = new Scanner(System.in);

		System.out.println("What's your dog's name?");
		String dog_name = sc.nextLine();

		System.out.println("How old is your dog?");
		int dog_age = sc.nextInt();

		System.out.println("How big is your dog?");
		String dog_size = sc.nextLine();

		Dog dog = new Dog();
		dog.setAge(dog_age);
		dog.setName(dog_name);
		dog.setSize(dog_size);

		switch (dog_size) {

			case "small":
				System.out.println("Small dogs live a long life.");
				break;

			case "medium":
				System.out.println("Medium sized life an average life span");
				break;

			case "large":
				System.out.println("If well taken care, then it will have a good healthy life.");
				break;

			default:
				System.out.println("That's not a valid size. Check spelling and try again");
				System.out.println("what's size is your dog again?");
				String new_dog_size = sc.nextLine();

				switch (new_dog_size) {

					case "small":
						System.out.println("Small dogs live a long life.");
						break;

					case "medium":
						System.out.println("Medium sized dogs live an average life span");
						break;

					case "large":
						System.out.println("If well taken care, then it will have a good healthy life.");
						break;

				}

				break;

		}

		sc.close();
	}

}