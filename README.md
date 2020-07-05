### Handwritten digit Recognition using Cortex M4


## Table of Contents

1. [Overview](#overview)
2. [Requirements] (#req)
3. [Setup ](#setup)
4. [Acknowledgements](#ack)

<a name="overview"></a>
### Overview
* Implements a trained multi-layer perceptron for digit recognition on ARM Cortex-m4 micro-controller. 
* A 4-layer Perceptron is trained on MNIST dataset in tensorflow.
* The Trained Model is optimized by PCA, quantization (16-bits) and multiplier-less optimization.
* Training and optimizing procedures are not included as a part of this repository. 
* Optimized model is used to run inference on Cortex-M4
* API is provided on console.(Linux OS)
* A total of 100 images (indexed 0 - 99) are present in the repository for testing
* Go thru presentation.pdf for details


<a name="req"></a>
### Requirements
 1. Tivaware Micro-controller Dev Board  with TM4C123GH6PM Micro-controller. Available on:
 https://in.element14.com/texas-instruments/ek-tm4c123gxl/launchpad-tiva-c-evaluation-kit/dp/2314937
 2. Tivaware Libraries : Available on
 http://software-dl.ti.com/tiva-c/SW-TM4C/latest/index_FDS.html
 3. Dev environment with ARM Compiler such as Keil u vision. COde Composer Studio(CCS). (This code was developed on Code Composer Studio)
 https://software-dl.ti.com/ccs/esd/documents/ccs_downloads.html
 4. PC with Linux OS
 5. USB to Micro USB cable
 
 
 <a name="setup"></a>
### Setup 
 1. Clone this repository 
 ```
 https://github.com/naveen-chander/mnist-digit-recognition-cortex-m4
 ```
 2. Copy all source files in the folder src_cortexm4 into a newly created CCS project
 3. Build and Run 
 4. Run the executable in api_src folder
 ```
 ./a.out
 ```
 
 
  <a name="ack"></a>
### Acknowledgements
1. Team Member : K Sai Vamshi (https://www.linkedin.com/in/sai-vamshi-kandukuri-961b3519a/)
2. Prof: Haresh Dagale, Dept of Electronic Systems Engineering(DESE), Indian Institute of Science(IISc)
3. NeuronICS lab , DESE , IISc