#Sample code for plotting gifs
#
#Plots nPlotsToGen gaussians centered at x=50
#with sigma ranging from startingSigma to
#ending sigma over nPlotsToGenSteps

import ROOT

#Delete existing gif it present
ROOT.gSystem.Unlink("sample.gif")
#How many steps do we want for our sigma range
nPlotsToGen=50
#Delay for gif in ms between frames
gifDelay=10

#Make gaussian fn to plot
fn=ROOT.TF1("fn","gaus",-100,100)
fn.SetNpx(1000) #How many points to use when drawing fn

#Amp
amp=1
fn.SetParameter(0,amp)
fn.SetNormalized(ROOT.kTRUE)

#Starting and ending range for sigma
startingSigma=2
endingSigma=30

#Calculate sigma step size
stepSize=float(endingSigma-startingSigma)/nPlotsToGen

#Make TCanvas for plotting
c1=ROOT.TCanvas("c1","c1")

#Generate and plot hist nPlotsToGen times with different
#sigma, save as a gif
for i in range(0,nPlotsToGen):
  #Set sigma
  sigma = startingSigma+stepSize*i
  fn.SetParameter(2,sigma)
  
  #Get histogram to draw,
  hist=fn.GetHistogram()
  #Set y axis
  hist.GetYaxis().SetRangeUser(0,0.2)
  #Draw
  hist.Draw()
  
  #Let canvas know we need to update it
  c1.Modified()
  c1.Update()
  
  #Write snapshot of canvas to gif
  if i!=nPlotsToGen-1:
    c1.Print("sample.gif+"+str(gifDelay))
  else:
    c1.Print("sample.gif++") #Loop infinitely at end

