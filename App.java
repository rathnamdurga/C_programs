import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.*;

public class App {
		public static void main(String[] args) throws Exception{
			Connection con=null;
			Class.forName("com.mysql.cj.jdbc.Driver");
			con=DriverManager.getConnection("jdbc:mysql://localhost:3306/university","root","Rathnam@877");
			Statement stmt=con.createStatement();
			stmt.execute("create table student1 (s_id integer,s_name varchar(20),s_dept varchar(5))");
			stmt.execute("insert into student1 values( 1 ,'arya' ,'cse')");
			stmt.execute("insert into student1 values( 2 ,'ashaa' ,'cse')");
            stmt.execute("insert into student1 values( 3 ,'rishi' ,'cse')");
            stmt.execute("insert into student1 values( 4 ,'rohi' ,'cse')");
			ResultSet rslt=stmt.executeQuery("select * from student1");
			while(rslt.next()) {
				System.out.println("s_id:" +rslt.getString(1) );
				System.out.println("s_name:" +rslt.getString(2) );
				System.out.println("s_dept:" +rslt.getString(3) );
			}
			rslt.close();
			stmt.close();
			con.close();
			
			 
		}

	}
