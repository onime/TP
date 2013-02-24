import java.io.FileReader;

import org.xml.sax.InputSource;
import org.xml.sax.XMLReader;
import org.xml.sax.helpers.XMLReaderFactory;


public class parseSax {

	
	public static void main(String[] args) throws Exception
    {
	XMLReader xr = XMLReaderFactory.createXMLReader();
	saxApp handler = new saxApp();
	xr.setContentHandler(handler);
	xr.setErrorHandler(handler);
	
	FileReader r = new FileReader("EB_IS_2009.xml");
    xr.parse(new InputSource(r));
    }

}
