#pragma once

namespace ExplicitMultiArgument
{
	class Example
	{
	public:
		Example(int a, int b);
	};

	class Consumer
	{
	public:
		void Bar(Example foo);
	};
}
