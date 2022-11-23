Problem 0279 Perfect Squares
============================

Dynamic programming
-------------------

Answer codes: c++
~~~~~~~~~~~~~~~~~

.. literalinclude:: ../../medium/Problem-0279-Perfect-Squares/answer_dp.cpp
    :language: cpp
    :linenos:

Pure Mathematics
----------------

Rationale
~~~~~~~~~

This method involves following `Lagrange's four-square theorem`_ (:prf:ref:`four-square`) and
`Legendre's three-square theorem`_ (:prf:ref:`three-square`).

.. prf:theorem::
    :label: four-square

    Each natural number :math:`x` can be decomposed into the sum of four integer
    squares.

    .. math:: 

        x = a^2 + b^2 + c^2 + d^2

.. prf:theorem::
    :label: three-square

    Each natural number :math:`x` can be decomposed into the sum of three
    integer squares

    .. math::

        x = a^2 + b^2 + c^2
    
    if and only if :math:`x` satisfies the following condition

    .. math::

        x \ne 4^k(8^m + 7)

.. _`Lagrange's four-square theorem`: https://en.wikipedia.org/wiki/Lagrange%27s_four-square_theorem
.. _`Legendre's three-square theorem`: https://en.wikipedia.org/wiki/Legendre%27s_three-square_theorem

Answer codes: c++
~~~~~~~~~~~~~~~~~

.. literalinclude:: ../../medium/Problem-0279-Perfect-Squares/answer_math.cpp
    :language: cpp
    :linenos: