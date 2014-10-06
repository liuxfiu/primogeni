An Overview of Primogeni- Hybrid Experimentation Approach
========================================================
*PrimoGENI* provides a GENI aggregate interface through which experimenters can launch large-scale network experiments on GENI (geni.net) resources consisting of both simulated network and real instances of network applications directly running on either virtual or physical machines. Real network traffic generated by the network applications can be introduced into the simulated network in real time and be subjected to proper delays and losses according to the simulated network conditions. To leverage the previous PrimoGENI prototype activities, PrimoGENI Constellation focuses specifically on facilitating distributed at-scale hybrid experiments for real-world high-impact applications. The main thrusts of PrimoGENI Constellation include: at-scale network experiments potentially distributed on different types of GENI resources in accordance with the GENI experiment workflow and facilitate  target applications modeling that supports prominent and high-impact future Internet research.



## Installing and Using Primogeni
To be able to use Primogeni and take advantage of hybrid experimentation using Primogeni, one needs to have Slingshot (Primogeni's IDE) installed on their local machine. Slingshot is developed using Eclipse RCP programming. Primogeni is an open source software therefore we recommend making it straight from the sources so that the experimenter can take advantage of the bug fixes and recent advancements while maintaining existing experimentation capability. 


#### Steps of the Primogeni experimentaion are -
  1. Making the simulator (primex), and installing required dependencies. (on local machine)
  2. Installing Eclipse (Indigo) and import Slingshot IDE project.(on local machine)
  3. Getting resources from GENI clearinghouse with Primogeni compatible OS images with preinstalled primex and required additional softwares and scripts. (Geni portal/Flack/Geni Desktop/Jacks/etc.)
4. Saving manifest rspec of the geni slice to local machine and importing the .rspec/.xml file to slingshot to create an environment where the experiments will be deployed
5. Creating a model consisting of emulated hosts (openvz containers), real traffic, simulated traffic and simulated hosts. Deploying the experiment model and collecting results.


##### Installing Primogeni on Local Machine (Steps 1 & 2 of Primogeni Experimentation)
This document includes steps for installing slingshot  on client machines. So far, we have successfully tested slingshot on Linux Ubuntu 12.04 32-bit
2. Mac OS 10.9 (maverick)


###### Express Install

1. Clone the priomogeni project at alocal directory
   * git clone github.com/netsym/primogeni
   * mv primogeni ~/Desktop
2. Install Primogeni using script
   * cd ~/Desktop/primogeni
   * chmod +x install_local.sh
   * ./install_local.sh


###### Step by Step Install (Alternative of Express Install)
In cases the express installation goes wrong we recommend making it step by step so that you can tackle any issue that might prevent you from installation.

1. Instaling dependencies:
   * Ubuntu
       1. sudo apt-get update; sudo apt-get upgrade;
       2. sudo apt-get install git build-essential subversion gcc gcc-c++ python flex bison ant mpi mpich mpich2 
2. Installing jdk 1.6.0 and setting JAVA_HOME
   *Ubuntu
       1. wget --no-cookies --no-check-certificate --header "Cookie: gpw_e24=http%3A%2F%2Fwww.oracle.com%2F; oraclelicense=accept-securebackup-cookie" "http://download.oracle.com/otn-pub/java/jdk/6u23-b05/jdk-6u23-linux-x64.bin"
       2. chmod +x ./jdk*;
       3. ./jdk-6u23-linux-x64.bin
       4. mkdir -p /usr/local/;mv jdk1.6.0_23 /usr/local/
       5. echo "export JAVA_HOME=/usr/local/jdk1.6.0_23/" >> ~/.bashrc
       6. echo "export PATH=$JAVA_HOME/bin:$PATH"
3. Cloning Primogeni and making the primex simulator from source
   * Ubuntu
       1. git clone github.com/netsym/primogeni
       2. mv primogeni ~/Desktop/
       3. ~/Desktop/primogeni/clean_build_all.sh
       4. (Tackiling c++ errors) Most modern Ubuntu distros do not require this step. In case primex build fails because of c++, comment out line 244 and 245 in /usr/include/c++/4.6/i686-linux-gnu/bits/gthr-default.h.

##### Making and Running Primogeni API(Slingshot) on Eclipse

1. We would launch Slingshot on Eclipse at this step. We recommend *Eclipse Indigo for RCP and RAP developers* Download the Eclipse IDE.
   * You can find it [here](http://www.eclipse.org/downloads/packages/eclipse-rcp-and-rap-developers/indigosr2).
     *Unzip the Eclipse package.
     * We need one dependency called Afae for syntax highlighting in Slinghsot. Download Afae from here and place it in plugins folder of eclipse directory you just downloaded. You can checkout afae from primessf svn, the username and password is guest for checking out afae. Use: svn co https://primessf.net/repos/pgc/trunk/tools/com.rohanclan.afae_1.2.0
     * Open Eclipse executable. Set a directory for eclipse workspace, it can be any directory you like. 
     * Importing Slingshot(primogeni/netIDE) as a project
       * a. Click on File > New > Java Project
       * b. Put "Slingshot" for Project name and uncheck 'Use default location'
       * c. Browse for the folder where primogeni is located and select the netIDE folder and click 'OK', then click 'Next', and then 'Finish'.
       * d. Since Slingshot will use primex, we have to configure java library in Eclipse that you compiled primex with. To do this
         * Right click Slingshot project within eclipse in the package explorer on the left.
         * Then click on properties.
         * From this window, click on Java Build Path on the left. 
         * Click on the libraries tab on the top. 
         * Select the JRE System library which should be second to last on the libraries list. 
         * Click on edit on the right.
         * Select your jdk that you installed primex with. (Click on alternate JRE->installed JREs->add->Standard VM->next).
         * Under JRE home, click on directory and navigate to your java home directory. If you followed all the insructions, it should be /usr/local/jdk1.6.0_23. Then click ok then Click on finish. Now select the new JRE under the installed JREs window. It should be jdk1.6.0_23. Click ok. In the JRE System Library window, under aternate JRE, the open jdk will still be selected. You need to change it to jdk1.6.0_23, then click finish. Now your Java Build Path is correctly configured. Click ok.
         * 
2. Making Slingshot Product
  * Expand the slingshot project. Open the *.product file corresponding to your machine. In our case, it is 'slingshot_linux_32.product. The file should have opened up in the editor. Click on the green play button WITHIN THE PRODUCT FILE! This will build and launch slingshot. (!Important Reminder: DO NOT click on the play button on the top of eclipse.)
  * Slingshot will prompt you for a workspace. Choose a local folder that you would like to use as Sligshot workspace, a different folder than your Eclipse workspace. 
  * Configuring simulator directory in Slingshot: Click on Tools > Slingshot Config Wizard in the top menu bar. After the dialog opens up, click on browse and select the primogeni directory whereyou installed the simulator. Then click 'OK' then 'Finish'.



##### How to run Experiment on Geni?
  * Now its time to create an experiment in Slingshot. Follow this [link](http://users.cis.fiu.edu/~meraz001/primotutorial/getstarted.html) for getting started with model writing for Slingshot. This will show you the basics of creating, compiling, and running an experiment in Slingshot. 
A simple model that only contains simulated hosts and link can be run on Local simulator by compiling and running the experiment you just created.

  * For running the experiments on GENI you should select some of the hosts of your model as emulated hosts. To get the resources for running the model on Geni resources you need to get Geni resource slice (using Flack/Geni Desktop/Omni/geni portal). Allocate two machines (or vms) connected with a lan. Assign the lan interface an ipv4 IP like 10.10.1.1 and 10.10.1.2. To be able to run Primogeni the OS image of these two sliver needs to have a Primogeni OS image. 

*Here is few precreated OS image list can be found here*.
1 *Exogeni*
     * Primogeni OS image for Exogeni (version-GEC 21)
     * Image descriptor xml: http://users.cis.fiu.edu/~mobai001/primogeni_exo_image/new_image.xml
     * Please verify sha1sum: eb36bbf95d7d73b698e4ad24ea1064438f7f82da

2 For: Instageni emulab-xen sliver.
   1 OS image: NORTHWESTERN
      * UTC Time: 10/02/2014 06:31:01 AM
      * For the same manager, you can use id=urn:publicid:IDN+instageni.northwestern.edu+image+ch-geni-net:primov3instanorthwestern
      * For other managers, you can use url=https://www.instageni.northwestern.edu/image_metadata.php?uuid=b550f7d0-49fd-11e4-8c68-000000000000
   1 OS IMAGE complete instageni site: CLEMSON
      * For the same manager, you can use id=urn:publicid:IDN+instageni.clemson.edu+image+ch-geni-net:primov32instaclemson
      * For other managers, you can use url=
      * Comments: Working Image
   1 OS IMAGE complete instageni site: KU.GPENI.NET
      * For the same manager, you can use id=urn:publicid:IDN+instageni.ku.gpeni.net+image+ch-geni-net:primov31instclemson
      * For other managers, you can use url=https://www.instageni.ku.gpeni.net/image_metadata.php?uuid=37ea9fda-49ef-11e4-8f68-000000000000
   1 OS IMAGE complete instageni site: KU.GPENI.NET
      * For the same manager, you can use id=urn:publicid:IDN+instageni.ku.gpeni.net+image+ch-geni-net:primov3instaclemson
      * For other managers, you can use url=https://www.instageni.ku.gpeni.net/image_metadata.php?uuid=d01d7d72-49dc-11e4-8f68-000000000000
      * Comments: Working image

3 For: Protogeni

 While your slice takes time to allocate resources lets create an experiment in Slingshot. To create an experiment, click on File > New > Experiment on the top menu bar of Slingshot. This will bring up a new window. Name the experiment With an experiment name and Browse for the model file. Navigate to the primex directory. Go to netscript/test/java_models and select MySecondJavaModel? .java the click ok. Click finish to create the experiment. This will build a visual representation of the model and open up the model view for the project. On the right, find View Depth: and put that up to 3 by click the up arrow. Now you can see the full model. 
   * To compile the model, click on Experiment > Compile Experiment on the top menu bar. Now that the model is compiled, it cannot be changed. 
   *To run the experiment, click on Experiment > Launch Experiment on the top menu bar. This will bring up a window. Select Local Simulator then click next. For Runtime:, put 20 seconds. Leave the #Processors: at 1, and for Pace Simulation Speed:, put 1 which will indicate (Real Time). When you click finish, slingshot will begin to run your experiment. You can see this under View Depth. the Time is moving. When it gets to 10 seconds, you will see the nodes start blinking and changing colors. When the experiment terminates, a window will indicate this. Click ok. If running the experiment did not work, verify that you have configured slingshot to point to the appropriate primex directory you downloaded or checked out with svn (refer to step 13).
16. If you had any other problems, you can try following these steps again or you can contact us at <support-email-here>



A hybrid network experiment testbed on GENI with physical, simulated, and emulated network components.
