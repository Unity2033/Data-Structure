namespace ConsoleApp15
{
    internal class Program
    {
        static void Beacon(Terran terran)
        {
            terran.Recovery();
        }

        static void Main(string[] args)
        {
            Marine marine = new Marine();
            Firebet fireBet = new Firebet();
            Ghost ghost = new Ghost();

            marine.Health -= 10;
            fireBet.Health -= 10;
            ghost.Health -= 10;

            Beacon(marine);
            Beacon(fireBet);
            Beacon(ghost);
        }
    }
}