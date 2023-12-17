import matplotlib.pyplot as plt
import numpy as np

# Set up plot
fig, ax = plt.subplots()

# Values for plotting
theta_inner = np.linspace(0, 50 * np.pi, 10000)
theta_outer_1 = np.linspace(0, 3 * 2 * np.pi, 10000)
theta_outer_2 = np.linspace(0, 22 * 2 * np.pi, 10000)
theta_outer_3 = np.linspace(0, 355 * 2 * np.pi, 10000)

# Plot the rotations
ax.plot(np.cos(theta_inner), np.sin(theta_inner),
        label='Inner Rod (e^θi)', linestyle='--')
ax.plot(np.cos(theta_outer_1), np.sin(theta_outer_1),
        label='Outer Rod (e^πθi) (Close to 3)', alpha=0.7)
ax.plot(np.cos(theta_outer_2), np.sin(theta_outer_2),
        label='Outer Rod (e^πθi) (Close to 22/7)', alpha=0.7)
ax.plot(np.cos(theta_outer_3), np.sin(theta_outer_3),
        label='Outer Rod (e^πθi) (Close to 355/113)', alpha=0.7)

# Set aspect ratio as equal for circular representation
ax.set_aspect('equal')

# Show plot
plt.legend()
plt.title('Rotations of Rods (Near Misses with Rational Approximations of Pi)')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.grid(True)
plt.show()
