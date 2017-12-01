import java.util.*;
public class Normalization 
{
    Scanner s;
    ArrayList<Integer> olist;
    ArrayList<Float> minMaxList, zScoreList;
    int size, min, max;
    float mean;
    
    public Normalization()
    {
        olist = new ArrayList<>();
        minMaxList = new ArrayList<>();
        zScoreList = new ArrayList<>();
        s = new Scanner(System.in);
    }
   
    void input()
    {
        System.out.println("Enter count of numbers :");
        size = s.nextInt();      
        System.out.println("\nEnter "+size+" numbers :");
        for(int i=0;i<size;i++)
            olist.add(s.nextInt());
        Collections.sort(olist);    
        min = Collections.min(olist);
        max = Collections.max(olist);
    }
    
    void minMaxNorm()
    {
        int newMin, newMax, num, newMinMaxDif;
        float newNum;
        System.out.println("\nEnter newMin and newMax for min-max normalization :");
        newMin = s.nextInt();
        newMax = s.nextInt();
        newMinMaxDif = newMax - newMin;
        for(int i=0;i<size;i++)
	{
            newNum = (float)((float)((float)olist.get(i)-min)/(max-min)*newMinMaxDif)+newMin;
            minMaxList.add(newNum);
        }
    }
    
    void zScoreNorm()
    {
        float sd, var, newNum;
        for(int i=0;i<size;i++)
            mean += olist.get(i);
        mean /= size;
        var = calVar();
        sd = (float) Math.sqrt(var);
        for(int i=0;i<size;i++)
	{
            newNum = ((float)olist.get(i)-mean)/sd;
            zScoreList.add(newNum);
        }
    }
    float calVar()
    {
        float tmp = 0.0f;
        for(int i=0;i<size;i++)
            tmp += (mean-olist.get(i))*(mean-olist.get(i));
        return tmp/(size-1);
    }   
    void output(ArrayList list)
    {
        for(int i=0;i<size;i++)
            System.out.printf("%.2f ",list.get(i));
        System.out.println();
    }
    public static void main(String []arg)
    {
        Normalization norm = new Normalization();
        norm.input();
        norm.minMaxNorm();
        System.out.println("\nAfter Min-Max Normalization:");
        norm.output(norm.minMaxList);
        norm.zScoreNorm();
        System.out.println("\nAfter Z-Score Normalization:");
        norm.output(norm.zScoreList);
        System.out.println();
    }
}
