PrimoGENI Constellation for Hybrid At-Scale Network Experimentation on GENI Resources 
=====================================================================================

PrimoGENI Constellation allows network experimenters to conduct large-scale network experiments consisting of simulated and emulated network components running real instances of network applications on GENI resources (geni.net). Network traffic generated by the real applications is incorporated with the virtual network and subjected to proper delays and losses according to the simulated network conditions. 

## Prepare Installation 

There are three steps for preparing PrimoGENI Constellation to run from your local machine (we have tested both on Ubuntu Linux and on Mac OS):

  1. Building the real-time network simulator (called `primex`)
  2. Installing the PrimoGENI IDE (called `slingshot`)
  3. Preparing the runtime environment for running experiments on GENI slices

Before installation, you need to install the necessary packages that PrimoGENI is dependent upon. 
* Ubuntu Linux:
  1. `sudo apt-get update; sudo apt-get upgrade`
  2. `sudo apt-get install git subversion build-essential gcc python flex bison ant openjdk-6-jdk`
  3. `sudo update-alternatives --config javac` 
  4. Set environment variable JAVA\_HOME for your shell to the installed openjdk6 (e.g., for bash shell on 32-bit Linux: `export JAVA_HOME=/usr/lib/jvm/java-6-openjdk-i386`)
* Mac OS:
  1. Install latest MacPorts (https://www.macports.org/) and Xcode (https://developer.apple.com/xcode/downloads/)
  2. `sudo port selfupdate; sudo port upgrade outdated`
  3. `sudo port install git subversion python flex bison ant`
  4. Install Java 1.6
  5. Set environment variable JAVA\_HOME for your shell (e.g., for bash shell: ``export JAVA_HOME=`/usr/libexec/java_home```)

## Build Primex

Primex is a real-time network simulator. In order to run (small) network experiments on your local machine, you need to install primex:
  1. `git clone https://github.com/netsym/primogeni`
  2. `cd primogeni; sh ./build_all.sh`



Installing and Using Primogeni
To be able to use Primogeni and take advantage of hybrid experimentation using Primogeni, one needs to have Slingshot (Primogeni's IDE) installed on their local machine. Slingshot is developed using Eclipse RCP programming. Primogeni is an open source software therefore we recommend making it straight from the sources so that the experimenter can take advantage of the bug fixes and recent advancements while maintaining existing experimentation capability. 


### Steps of the Primogeni experimentaion are -
  1. Making the simulator (primex), and installing required dependencies. (on local machine)
  2. Installing Eclipse (Indigo) and import Slingshot IDE project.(on local machine)
  3. Getting resources from GENI clearinghouse with Primogeni compatible OS images with preinstalled primex and required additional softwares and scripts. (Geni portal/Flack/Geni Desktop/Jacks/etc.)
4. Saving manifest rspec of the geni slice to local machine and importing the .rspec/.xml file to slingshot to create an environment where the experiments will be deployed
5. Creating a model consisting of emulated hosts (openvz containers), real traffic, simulated traffic and simulated hosts. Deploying the experiment model and collecting results.


#### Installing Primogeni on Local Machine (Steps 1 & 2 of Primogeni Experimentation)
This document includes steps for installing slingshot  on client machines. So far, we have successfully tested slingshot on Linux Ubuntu 12.04 32-bit
2. Mac OS 10.9 (maverick)


### Step by Step Install
In cases the express installation goes wrong we recommend making it step by step so that you can tackle any issue that might prevent you from installation.

1. Instaling dependencies:
   * Ubuntu
       1. `sudo apt-get update; sudo apt-get upgrade;`
       2. `sudo apt-get install git build-essential subversion gcc python flex bison ant openjdk-6-jdk mpi mpich mpich2`
       3. `sudo update-alternatives --config javac` 
       4. You can set your JAVA_HOME to the installed openjdk6

2. Cloning Primogeni and making the primex simulator from source
   * Ubuntu
       1. `git clone https://github.com/netsym/primogeni`
       2. `mv primogeni ~/Desktop/primogeni`
       3. Cd to `~/Desktop/primogeni/netsim` and do a `./configure` to see if the simulator can locate necessary dependencies required for installation.
       4. `cd ~/Desktop/primogeni`
       5. `chmod +x clean_build_all.sh`
       3. `./clean_build_all.sh`
       4. (Tackiling c++ errors) Most modern Ubuntu distros do not require this step. In case primex build fails because of c++, comment out line 244 and 245 in /usr/include/c++/4.6/i686-linux-gnu/bits/gthr-default.h.

#### Making and Running Primogeni API(Slingshot) on Eclipse

1. We would launch Slingshot on Eclipse at this step. We recommend *Eclipse Indigo for RCP and RAP developers* Download the Eclipse IDE.
   * You can find it [here](http://www.eclipse.org/downloads/packages/eclipse-rcp-and-rap-developers/indigosr2).
     * Unzip the Eclipse package.
     * We need one dependency called `Afae` for syntax highlighting in Slinghsot. You can download the plugin [here](https://www.primessf.net/pub/Public/PrimoGENIProject/afae_plugins.tgz).  Untar afae_plugins.tgz by `tar -zxf afae_plugins.tgz` and move `com.rohanclan.afae_1.2.0`, `com.rohanclan.imageviewer_0.9.1`, and `com.rohanclan.snippets_0.8.8` to the plugins folder of your eclipse installation. You need to restart eclipse after doing this
     * Open Eclipse executable. Set a directory for eclipse `workspace`, it can be any directory you like. 
     * Importing Slingshot(primogeni/netIDE) as a project
       * a. Click on `File > New > Java` Project
       * b. Put `Slingshot` for Project name and uncheck `Use default location`.
       * c. Browse for the folder where primogeni is located and select the `netIDE` folder and click `OK`, then click `Next`, and then `Finish`.
       * d. Since Slingshot will use primex, we have to configure `java library` in Eclipse that you compiled primex with. To do this:
         * `Right click Slingshot` project within eclipse in the package explorer on the left.
         * Then click on `properties`.
         * From this window, click on `Java Build Path` on the left. 
         * Click on the `libraries` tab on the top. 
         * Select the `JRE System library` which should be second to last on the libraries list. 
         * Click on `edit` on the right.
         * Select your jdk that you installed primex with. (Click on `alternate JRE->installed JREs->add->Standard VM->next`).
         * Under JRE home, click on directory and navigate to your java home directory. If you followed all the insructions, it should be `/usr/lib/jvm/java-6-openjdk-i386/amd64` or `/usr/lib/jvm/java-6-oracle/`. Then click `ok` then Click on `finis`h. Now select the new JRE under the installed JREs window. Click `ok`. In the JRE System Library window, under aternate JRE, the open jdk will still be selected. You need to change it to `openjdk-6` or `java-6-oracle`, then click `finish`. Now your Java Build Path is correctly configured. Click `ok`.


2. Making Slingshot Product
  * Expand the slingshot project. Open the `*.product` file corresponding to your machine. In our case, it is `slingshot_linux_32.product`. The file should have opened up in the editor. Click on the `green play button` WITHIN THE PRODUCT FILE! This will build and launch slingshot. (!Important Reminder: DO NOT click on the play button on the top of eclipse.)
  * Slingshot will prompt you for a `workspace`. Choose a local folder that you would like to use as Sligshot workspace, a different folder than your Eclipse workspace. 
  * Configuring simulator directory in Slingshot: Click on `Tools > Slingshot Config Wizard` in the top menu bar. After the dialog opens up, click on browse and select the `primogeni directory` where you installed the simulator. Then click `OK` then `Finish`.



#### How to run Experiment on Geni?
  * Now its time to create an experiment in Slingshot. Follow this [link](http://users.cis.fiu.edu/~meraz001/primotutorial/getstarted.html) for getting started with model writing for Slingshot. This will show you the basics of creating, compiling, and running an experiment in Slingshot. 
A simple model that only contains simulated hosts and link can be run on Local simulator by compiling and running the experiment you just created.

  * For running the experiments on GENI you should select some of the hosts of your model as *emulated hosts*. To get the resources for running the model on Geni resources you need to get Geni resource slice (using Flack/Geni Desktop/Omni/geni portal). Allocate two machines (or vms) connected with a lan. Assign the lan interface an ipv4 IP like `10.10.1.1` and `10.10.1.2`. To be able to run Primogeni the OS image of these two sliver needs to have a **Primogeni OS image**.

**Here is few precreated Primogeni OS image**

1. **Exogeni**
     * Primogeni OS image for Exogeni (version-GEC 21)
     * Image descriptor xml: `http://users.cis.fiu.edu/~mobai001/primogeni_exo_image/new_image.xml`
     * Please verify sha1sum: `eb36bbf95d7d73b698e4ad24ea1064438f7f82da`

2. **Instageni (sliver_typr=emulab-xen)**.
   1. OS image: NORTHWESTERN
      * For the same manager, you can use id=urn:publicid:IDN+instageni.northwestern.edu+image+ch-geni-net:primov3instanorthwestern
      * For other managers, you can use url=https://www.instageni.northwestern.edu/image_metadata.php?uuid=b550f7d0-49fd-11e4-8c68-000000000000
      * Comments: Tested Operational.
   2. OS IMAGE complete instageni site: CLEMSON
      * For the same manager, you can use id=urn:publicid:IDN+instageni.clemson.edu+image+ch-geni-net:primov32instaclemson
      * Comments: Tested Operational.
   3. OS IMAGE complete instageni site: KU.GPENI.NET
      * For the same manager, you can use id=urn:publicid:IDN+instageni.ku.gpeni.net+image+ch-geni-net:primov31instclemson
      * For other managers, you can use url=https://www.instageni.ku.gpeni.net/image_metadata.php?uuid=37ea9fda-49ef-11e4-8f68-000000000000
   4. OS IMAGE complete instageni site: Gatech
      * For the same manager, you can use id=urn:publicid:IDN+instageni.ku.gpeni.net+image+ch-geni-net:primov3instaclemson
      * For other managers, you can use url=https://www.instageni.ku.gpeni.net/image_metadata.php?uuid=d01d7d72-49dc-11e4-8f68-000000000000
      * Comments: Tested Operational.

3. For: Protogeni
    1. Emulab.net
       * Image 1 


##### Creating a Hybrid Experiment on Slingshot
We have some saved models in `primogeni` project you cloned from github.  While your slice takes time to allocate resources lets create an experiment in Slingshot. To create an experiment, click on `File > New > Experiment` on the top menu bar of Slingshot. This will bring up a new window. `Name` the experiment With an experiment name and Browse for the model file. Navigate to the primogeni directory(The one you cloned from git). Go to `netscript/test/java_models` and select `MyThirdJavaModel.java` the click `ok`. Click `finish` to create the experiment. Now double-click on the experiment to see the visualization of the model on Slingshot. You can `increase/decrese` view depth on right to adjust On the right of the Slingshot to view the details of the nested subnets.  
 
##### Compiling The Model
To compile the model, click on `Experiment > Compile Experiment` on the top menu bar. Your experiment is compiled.

##### Adding a Slingshot Environment for Deploying Model
I am assuming  enough time has passed and our slivers that we were creating are allocated and ready to do use. Hosts generally turn green in Flack once they are up and ready to use. 
   * Save the manifest rspec from geni portal with a .rspec or .xml extension. 
   * Click on create a new environment button on the toolbar. 
   * Select `Progeni/Instageni/Exogeni` and Click `next`. Select which version is your rspec and then browse the Rspec file and click `add`. It will be listed for persing.
   * Now Select one of the slivers as `master` and rest of the slivers as `slave` for the experiment. Please refer to this to learn more about Primogeni Architecture. Click `next`. 
   * It will show you a summary about the master and slave nodes in the rspec
   * Environemt is added successfully.
   * Note: For creating Portal experiments (Special types of supported nodes in Primogeni that lets Primogeni slivers to connect to external network/internet), the resource allocation and environment creation need to be configured like differently.
   



##### Running The Model
One you have the model compiled and the environment created to support emulation you can now deploy your model and view/collect realtime experiment results. Click the `Play` button in the toolbar to run the model. It will ask you to `select the environment`. Select the environment where you want to deploy your experiment. (You can `use the environment you created in previous step`). Enter the `time` for how long you want to run the experiment. Hit `finish`. It will take few seconds based on the communication delay of the remote Geni machines for the experiment to start. In addition if there is any emulated hosts those will be created right before advancing the simulation time. Check the Slingshot Log if there is any isssues that might prevent your experimnent from deploying.


#### Primogeni COnstellation Mailing list
You can report the problems you  experience during the whole process at our mailing list. 
Our mailing list is: primogeni
