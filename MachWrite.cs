using System;
using System.Threading;
using System.IO;


class MachineWriting
{
	public static void MachType(string Text, int MinGen, int MaxGen)
	{
		Random randModule = new Random();
		for (int i = 0; i < Text.Length; i++)
		{
			Console.Write(Text[i]);
			switch (Text[i])
			{
				//если в тексте есть запятая, randModule генерирует число, на 150 пунктов больше чем изначально
				case ',':
				Thread.Sleep(randModule.Next(MinGen + 150,MaxGen + 150));
				break;
				//если в тексте есть точка, randModule генерирует число, которое в среднем на 300 пунктов больше
				case '.':
				Thread.Sleep(randModule.Next(MinGen + 300,MaxGen + 300));
				break;
				
				default:
				Thread.Sleep(randModule.Next(MinGen,MaxGen));
				break;
			}
		}
	}
}