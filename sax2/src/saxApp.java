import org.xml.sax.Attributes;
import org.xml.sax.helpers.DefaultHandler;
	
	public class saxApp extends DefaultHandler
	{
		private int nb_m;
		private int nb_f;
		
	    public saxApp ()
	    {
	    	super();
	    	nb_m = 0;
	    	nb_f = 0;
		
	    }
	
	    public void startDocument ()
	    {
		System.out.println("Start document");
	    }
	
	    public void endDocument ()
	    {
	    	System.out.println("Nombre de fille "+nb_f);
	    	System.out.println("Nombre de mec "+nb_m);
		
	    }
	    public void startElement (String uri, String name,
			      String qName, Attributes atts)
	    {
	    	   		    	
	    	if(qName.equals("researcher"))
	    		if(atts.getValue(0).equals("m"))
	    			nb_m++;
	    		else if(atts.getValue(0).equals("f"))
	    			nb_f++;
	    		
	    }
	
	    public void endElement (String uri, String name, String qName)
	    {
	    	
	    }
	    public void characters (char ch[], int start, int length)
	    {
		/*System.out.print("Characters:    \"");
		for (int i = start; i < start + length; i++) {
		    switch (ch[i]) {
		    case '\\':
			System.out.print("\\\\");
			break;
		    case '"':
			System.out.print("\\\"");
			break;
		    case '\n':
			System.out.print("\\n");
			break;
		    case '\r':
			System.out.print("\\r");
			break;
		    case '\t':
			System.out.print("\\t");
			break;
		    default:
			System.out.print(ch[i]);
			break;
		    }
		}
		System.out.print("\"\n");
	
	    */
	    }	
	}