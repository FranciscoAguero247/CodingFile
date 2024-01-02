
public class StudentInfo {

	protected String name;
	protected int StudentId;
	protected String DateOfBirth;
	
	public void SetName(String name) {
		this.name = name;
	}
	public String getName() {
		return name;
	}
	public void SetStudentId(int StudentId) {
		this.StudentId = StudentId;
	}
	public int getStudentId() {
		return StudentId;
	}
	
	public void setDateOfBirth(String DateOfBirth) {
		this.DateOfBirth = DateOfBirth;
	}
	public String getDateOfBirth() {
		return DateOfBirth;
	}
}
