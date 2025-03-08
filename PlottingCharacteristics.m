%% Plotting Results
sim('PositionSensor.slx')
figure
hold on 
grid on
plot(t, u, 'b', 'LineWidth', 1.5);
plot(out.tout, out.yout{1}.Values.Data, 'r', 'LineWidth', 1.5);
xlabel("Time")
legend('Acceleration Pedal Sensor', 'Output Voltage')