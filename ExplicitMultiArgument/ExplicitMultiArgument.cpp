#include "ExplicitMultiArgument.h"
#include "Example.h"

using namespace std;
using namespace ExplicitMultiArgument;

int main()
{
	Consumer consumer;
	consumer.Bar({ 1, 2 });

	return 0;
}
