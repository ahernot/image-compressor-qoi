import numpy as np

def run (nb_tests = 1000):
    # Comparing the results of (x%n-y%n)%n and (x-y)%n
    
    n = 256
    x_rand = np.random.randint(0, 256, size=(nb_tests,))
    y_rand = np.random.randint(0, 256, size=(nb_tests,))
    
    sep = (x_rand % n - y_rand % n)%n
    fac = (x_rand - y_rand) % n
    diff = fac - sep

    return diff.all() == 0


if __name__ == '__main__':
    for iter in range(100):
        out = run()
        if not out:
            raise ValueError()
    print('Success')