---
layout: archive
title: "PhD Defense"
permalink: /defense/
author_profile: true
redirect_from:
  - /phddefense
---

My PhD defense will be on **Monday, 12 December 2022, 14h CET**. It will be hybrid, in person in room **1Z18** at ENS Paris-Saclay, and the details to join online can be found below.

Participate via Zoom:
[https://us02web.zoom.us/j/2391972631?pwd=UWZ5dzJycWt3aXBVa3JneVJua0NTZz09](https://us02web.zoom.us/j/2391972631?pwd=UWZ5dzJycWt3aXBVa3JneVJua0NTZz09) <br>
Meeting ID : 239 197 2631 <br>
Code : 03EY2f

<h1>Abstract</h1>

Distributed systems involve processes that run independently and communicate asynchronously. While they capture a wide range of use cases and are hence, ubiquitous in our world, it is also particularly difficult to ensure their correctness. In this thesis, we model such systems using mathematical and logical formulation, and try to verify them algorithmically. In particular, we focus on FIFO (First-In First-Out) machines, with one or more finite-state machines communicating via unbounded reliable FIFO buffers.

As most verification problems are known to be undecidable for FIFO machines, we focus on various subclasses and approximations of the model. The first model we consider is branch-well structured transition systems (branch-WSTS), a class which strictly includes the well-known class of WSTS. We study the problems of boundedness and termination for such systems, and demonstrate some examples of them. We also define another class of systems where the monotony condition is relaxed and show that a variant of the coverability problem is decidable under effectivity conditions.

We then study the restriction of input-boundedness on FIFO machines, and show that rational reachability and various other properties are decidable for FIFO machines under the input-bounded restriction. In doing so, we answer a long-standing open question regarding the reachability of input-bounded FIFO machines. We also derive some complexity bounds by considering the simplest case, a FIFO machine with a single channel.

Another restriction that we study is synchronizability in communicating systems. In particular, we explore this notion for MSCs (Message Sequence Charts), which is a model to represent executions of a communicating system. We show that if any set of MSCs can satisfy two properties, namely MSO (Monadic Second-order Logic) definability and bounded (special-)tree width, then synchronizability is decidable. Moreover, reachability and model-checking are also decidable within this framework. We also unify some classes from the literature using this framework, and for some other classes, show their undecidability.


<h1>Jury</h1>

<ul>
  <li>Ahmed Bouajjani,    <em>Professor, Univ Paris Diderot (Paris 7)</em> -   <strong>REVIEWER</strong> </li>
  <li>Rupak Majumdar, <em>Director, Max Planck Institute for Software Systems</em> - <strong>REVIEWER</strong> </li>
  <li>Mihaela Sighireanu, <em>Professor, ENS Paris-Saclay</em> - <strong>PRESIDENT</strong> </li>
  <li>Thierry Jeron, <em>Research Director, INRIA/IRISA Rennes</em> - <strong>EXAMINER</strong> </li>
  <li>Nobuko Yoshida, <em>Professor, University of Oxford</em> - <strong>EXAMINER</strong> </li>
  <li>Benedikt Bollig, <em>Research Director, CNRS, ENS Paris-Saclay</em> - <strong>SUPERVISOR</strong> </li>
  <li>Alain Finkel, <em>Professor, ENS Paris-Saclay</em> - <strong>SUPERVISOR</strong> </li>
</ul>





The report for the defense can be found [here](defense/amrita_thesis.pdf).

For any further details, please do not hesitate to send me an email.

