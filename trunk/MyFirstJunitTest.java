/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package myfirstjunit;

import org.junit.*;
import static org.junit.Assert.*;

/**
 *
 * @author johnburns
 */
public class MyFirstJunitTest {
    
    public MyFirstJunitTest() {
    }

    @BeforeClass
    public static void setUpClass() throws Exception {
    }

    @AfterClass
    public static void tearDownClass() throws Exception {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of grade method, of class MyFirstJunit.
     */
    @Test
    public void testGrade() {
        System.out.println("grade");
        int exam = 0;
        int ca = 0;
        String expResult = "";
        String result = MyFirstJunit.grade(exam, ca);
        assertEquals(expResult, result);
    }
    
    @Test
    public void testGradeFullMarks() {
        System.out.println("grade");
        int exam = 99;
        int ca = 99;
        String expResult = "Pass with distinction";
        String result = MyFirstJunit.grade(exam, ca);
        assertEquals(expResult, result);
    }
    /**
     * Test of main method, of class MyFirstJunit.
     */
    @Ignore
    @Test
    public void testMain() {
        System.out.println("main");
        String[] args = null;
        MyFirstJunit.main(args);
        // TODO review the generated test code and remove the default call to fail.
        fail("The test case is a prototype.");
    }
}