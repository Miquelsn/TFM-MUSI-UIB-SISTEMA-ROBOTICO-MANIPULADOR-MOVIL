; Auto-generated. Do not edit!


(cl:in-package propio-srv)


;//! \htmlinclude StartPickAndPlace-request.msg.html

(cl:defclass <StartPickAndPlace-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass StartPickAndPlace-request (<StartPickAndPlace-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartPickAndPlace-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartPickAndPlace-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name propio-srv:<StartPickAndPlace-request> is deprecated: use propio-srv:StartPickAndPlace-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartPickAndPlace-request>) ostream)
  "Serializes a message object of type '<StartPickAndPlace-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartPickAndPlace-request>) istream)
  "Deserializes a message object of type '<StartPickAndPlace-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartPickAndPlace-request>)))
  "Returns string type for a service object of type '<StartPickAndPlace-request>"
  "propio/StartPickAndPlaceRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartPickAndPlace-request)))
  "Returns string type for a service object of type 'StartPickAndPlace-request"
  "propio/StartPickAndPlaceRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartPickAndPlace-request>)))
  "Returns md5sum for a message object of type '<StartPickAndPlace-request>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartPickAndPlace-request)))
  "Returns md5sum for a message object of type 'StartPickAndPlace-request"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartPickAndPlace-request>)))
  "Returns full string definition for message of type '<StartPickAndPlace-request>"
  (cl:format cl:nil "# StartPickAndPlace.srv~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartPickAndPlace-request)))
  "Returns full string definition for message of type 'StartPickAndPlace-request"
  (cl:format cl:nil "# StartPickAndPlace.srv~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartPickAndPlace-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartPickAndPlace-request>))
  "Converts a ROS message object to a list"
  (cl:list 'StartPickAndPlace-request
))
;//! \htmlinclude StartPickAndPlace-response.msg.html

(cl:defclass <StartPickAndPlace-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass StartPickAndPlace-response (<StartPickAndPlace-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartPickAndPlace-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartPickAndPlace-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name propio-srv:<StartPickAndPlace-response> is deprecated: use propio-srv:StartPickAndPlace-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <StartPickAndPlace-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader propio-srv:success-val is deprecated.  Use propio-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartPickAndPlace-response>) ostream)
  "Serializes a message object of type '<StartPickAndPlace-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartPickAndPlace-response>) istream)
  "Deserializes a message object of type '<StartPickAndPlace-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartPickAndPlace-response>)))
  "Returns string type for a service object of type '<StartPickAndPlace-response>"
  "propio/StartPickAndPlaceResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartPickAndPlace-response)))
  "Returns string type for a service object of type 'StartPickAndPlace-response"
  "propio/StartPickAndPlaceResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartPickAndPlace-response>)))
  "Returns md5sum for a message object of type '<StartPickAndPlace-response>"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartPickAndPlace-response)))
  "Returns md5sum for a message object of type 'StartPickAndPlace-response"
  "358e233cde0c8a8bcfea4ce193f8fc15")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartPickAndPlace-response>)))
  "Returns full string definition for message of type '<StartPickAndPlace-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartPickAndPlace-response)))
  "Returns full string definition for message of type 'StartPickAndPlace-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartPickAndPlace-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartPickAndPlace-response>))
  "Converts a ROS message object to a list"
  (cl:list 'StartPickAndPlace-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'StartPickAndPlace)))
  'StartPickAndPlace-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'StartPickAndPlace)))
  'StartPickAndPlace-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartPickAndPlace)))
  "Returns string type for a service object of type '<StartPickAndPlace>"
  "propio/StartPickAndPlace")