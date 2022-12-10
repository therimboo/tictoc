network Network
{
    @display("bgb=425,301");
    submodules:
        c1: Computer {
            @display("p=74,66");
        }
        c2: Computer {
            @display("p=360,195");
        }
    connections:
        c1.out --> c2.in;
        c2.out --> c1.in;
}
