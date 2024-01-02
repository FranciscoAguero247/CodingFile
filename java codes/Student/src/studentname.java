import java.util.ArrayList;

public class studentname {

	public static void main(String[] args) {
		
		
		//StudentInfo student = new StudentInfo();
		
		ArrayList<Student> Students_Data = new ArrayList<Student>();
		
		Student student1 = new Student("Joe Doe", 42526354, "Janaury 15, 1995");
		
		Student student2 = new Student("Pinky Joes", 15456152, "September 28, 2000");
		
		Student student3 = new Student("Holein Ricks", 78245391, "December 5, 1998");
		
		Students_Data.add(student1);
		Students_Data.add(student2);
		Students_Data.add(student3);
		
		System.out.println("Name of student: " + Students_Data.get(0).getName());
		System.out.println("Student's ID: " + Students_Data.get(0).getStudentId());
		System.out.println("Student's Date of birth: " + Students_Data.get(0).getDateOfBirth() + "\n");
		
		System.out.println("Name of student: " + Students_Data.get(1).getName());
		System.out.println("Student's ID: " + Students_Data.get(1).getStudentId());
		System.out.println("Student's Date of birth: " + Students_Data.get(1).getDateOfBirth() + "\n");
		
		System.out.println("Name of student: " + Students_Data.get(2).getName());
		System.out.println("Student's ID: " + Students_Data.get(2).getStudentId());
		System.out.println("Student's Date of birth: " + Students_Data.get(2).getDateOfBirth() + "\n");
		
	}

}
