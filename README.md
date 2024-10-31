# profspacegap

This repository is deployable in Docker, and extendable to be run on the car. 

## To deploy in docker
Copy in data file and create src repository

```
cp /from/somewhere/2023_09_28_16_19_25_2T3MWRFVXLW056972microstrain_record.bag mytest.bag
mkdir -p src
cd src
git clone https://github.com/jmscslgroup/subtractor
git clone https://github.com/jmscslgroup/odometer
git clone https://github.com/jmscslgroup/carsimplesimulink
git clone https://github.com/sprinkjm/profspacegap
```
Run docker, mounted to the 'right' directory

```
cd ..
docker run --mount type=bind,source=.,target=/ros/catkin_ws -it cs3891:barebones
```

Now you're inside your docker env

```
catkin_make
source devel/setup.bash
```

Then, run the controller

```
roslaunch profspacegap profspacegapdocker.launch
```
