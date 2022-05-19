class User {
    private String userName;
    private String firstName;
    private String lastName;
    private Adress adress;
    private int age;
    
    public int getAge() {
        return this.age;
    }
    public void setAge(int age) {
        this.age = age;
    }
}

class UserService {
    public void updateUserAge(User user) {
        user.age = 20;
    }
}
