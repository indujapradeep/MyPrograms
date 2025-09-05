final class Database
{
    private static Database obj;
    
    private Database()
    {
        System.out.println("Executing Constructor...");     
    }


    public static Database createConnection()
    {
        if(obj==null)
        {
            obj=new Database();
        }
        return obj;
    }
    public void getItem()
    {
        System.out.println("Getting the Item..");
    }
} 
public class SingletonPattern
 {
    public static void main(String[] args)
    {
        Database database = Database.createConnection();
        database.getItem();
        database.getItem();
    }
}
