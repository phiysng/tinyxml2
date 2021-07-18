#include <tinyxml2.h>

using namespace tinyxml2;

int main() {
	XMLDocument document;
	auto error = document.LoadFile("./sample.xml");
	//error->XML_WRONG_ATTRIBUTE_TYPE
	//document.
}