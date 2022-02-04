fun main(args: Array<String>) {
	var input = "223+23/3"
	var count:Int = 1
	var str = input.split("+", "-", "*", "/")
	var output:Int = str[0].toInt()

	for(i: Int in 0..input.length-1)
	{
		if(input[i] == '+')
		{
			output = output + str[count++].toInt()
		}
		else if(input[i] == '*')
		{
			output = output * str[count++].toInt()
		}
		else if(input[i] == '-')
		{
			output = output - str[count++].toInt()
		}
		else if(input[i] == '/')
		{
			output = output / str[count++].toInt()
		}
	}
	
	println(output)
}
