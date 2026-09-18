
# System:
#   Setpoint = 100
#   Initial value ( PV ) = 10
#   Kp = 1.5
#   Response simulation: PVnew = PVcurrent + ( 0.3 * u(t) )

# u(t) = Kp * e(t) + Kd * ( current error - last error )

def main():
    
    target = 100
    PV = 10
    Kp = 1.5
    Kd = 0.2
    
    print( f"Initial PV: { PV }    Error: { target - PV }" )
    for i in range( 0, 10 ):
        PV = PV + ( 0.3 * ( ( target - PV ) * Kp ) )
        print( f"Current PV: {PV}    Error: { target - PV }" )

if __name__ == "__main__":
    main( )
