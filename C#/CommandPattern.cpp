interface ITestStep
{
    bool Run();
}

class TurnLightsOn : ITestStep
{
    public bool Run()
    {
        Console.WriteLine("Light On");
        return true;
    }
}

class TurnlightOff : ITestStep
{
    public boon Run()
    {
        Console.WriteLine("Lights off");
        return true;
    }
}

class MyTest
{
    private List<ITestStep> steps = new List<ITestStep>();

    public MyTest()
    {
        steps.Add(new TurnLightsOn());
        steps.Add(new TurnlightOff());
    }

    public void Run()
    {
        foreach (ITestStep step in steps)
        {
            if (!step.Run())
            {
                Console.WriteLine("Test Failed!")
                return;
            }
        }
        Console.WriteLine("Test Passed!");
    }
}