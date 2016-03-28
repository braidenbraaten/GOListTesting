#include "GOList.h"


namespace bab
{
	void GO_List::addObject(GameObjects* newObject)
	{
		goPtrList.push_back(newObject);
		objCount++;
		
	}

	void GO_List::createObject(std::string obj_name)
	{
		goPtrList.push_back(new GameObjects(obj_name));
		goNameList.push_back(obj_name);

	}

	void GO_List::addID(std::string *newName)
	{
		goNameList.push_back(*newName);
		idCount++;

	}

	void GO_List::changeID(std::string current_name , std::string new_name)
	{

		for (std::vector<std::string>::iterator i = goNameList.begin(); i != goNameList.end(); i++)
		{
			if ((i)->c_str() == current_name)
			{
				(i)->erase();
				(i)->assign(new_name);
			}
			
		}
	}



}