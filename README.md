#ELMS Learning Network Innovations

With this tool we'll unlock the potential of thousands of innovators who have great ideas and can click to build stuff but don't understand how to sustainably get those ideas from point A to point B. This repo uses the Innovate tool built into every ELMS Learning Network deployment, to allow for anyone who can do site builder to be able to sustainably share those creations back with the network, potentially to form new tools.
Innovate is simple. It is the base-line by which the ELMSLN core team creates any new tool available to ELMSLN. From there, we unlock the Views and Content type creation capabilities to allow people to use their Drupal for Education site to build out a great new tool for the edtech space.
After that though, how do you get it to others in a meaningful way? Features, Git, Pull Requests? We don't want everyone to have to understand these concepts to participate. So, we've automated them.
# Process
- Create a course in your ELMSLN setup and make sure to create the Innovate tool for your network
- Access innovate.elmsln.local/{coursename} and start modeling your idea in content types, views, whatever you need from the modules we make available. Your imagination and ability to good are the only limitations here.
- After creating your world changing idea, click the "Share innovation" Button
- Answer the questions on the form and then a job will be created on the backend of your ELMSLN instance
- This job will automatically bundle up all configuration / changes you made, create an install profile and associated files we'd need to test your idea
- It then sends the idea to the WildWest; a dangerous outlaw area on github where we don't actually trust your idea but sure do need to know about it part'ner.
- After your code has been created and added to Wildwest, a "Pull Request" will be automatically made against this repository
- From there we'll have someone test your idea out and see ensure it is secure / viable for addition to the innovations registry (found in this repo)
- If it's accepted, others will then be able to browser the innovations repo from their innovate tools (coming soon) and ingest your idea into their setup

# Questions
## What is wild west... really?
The wildwest repo utilizes a shared public key that allows for the automation needed to bundle up and submit changes in any ELMSLN deployment. It's the wildwest because that is theoretically dangerous and the public key will be shuffled as needed. We have in big letters to NOT TRUST THE REPO because we don't. Trust comes in the form of a pull request that a human needs to verify / accept in order to have the code generated as part of Innovate added into other people's innovation catalog.
## Where did this come from?
Conversations between @michael-collins and @btopro from very early on in elmsln's history; eventually captured and reflected here -- https://github.com/elmsln/elmsln/issues/26
## Are you people mad? We can't eliminate all these programmers, THINK OF THE PROGRAMMERS!
Think of the world we'll create when you don't need them.
