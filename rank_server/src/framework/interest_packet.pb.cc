// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: interest_packet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "interest_packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace node {

namespace {

const ::google::protobuf::Descriptor* InterestPacket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InterestPacket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_interest_5fpacket_2eproto() {
  protobuf_AddDesc_interest_5fpacket_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "interest_packet.proto");
  GOOGLE_CHECK(file != NULL);
  InterestPacket_descriptor_ = file->message_type(0);
  static const int InterestPacket_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InterestPacket, interests_),
  };
  InterestPacket_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InterestPacket_descriptor_,
      InterestPacket::default_instance_,
      InterestPacket_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InterestPacket, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InterestPacket, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InterestPacket));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_interest_5fpacket_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InterestPacket_descriptor_, &InterestPacket::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_interest_5fpacket_2eproto() {
  delete InterestPacket::default_instance_;
  delete InterestPacket_reflection_;
}

void protobuf_AddDesc_interest_5fpacket_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025interest_packet.proto\022\004node\"#\n\016Interes"
    "tPacket\022\021\n\tinterests\030\001 \003(\005", 66);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "interest_packet.proto", &protobuf_RegisterTypes);
  InterestPacket::default_instance_ = new InterestPacket();
  InterestPacket::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_interest_5fpacket_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_interest_5fpacket_2eproto {
  StaticDescriptorInitializer_interest_5fpacket_2eproto() {
    protobuf_AddDesc_interest_5fpacket_2eproto();
  }
} static_descriptor_initializer_interest_5fpacket_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int InterestPacket::kInterestsFieldNumber;
#endif  // !_MSC_VER

InterestPacket::InterestPacket()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void InterestPacket::InitAsDefaultInstance() {
}

InterestPacket::InterestPacket(const InterestPacket& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void InterestPacket::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InterestPacket::~InterestPacket() {
  SharedDtor();
}

void InterestPacket::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InterestPacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InterestPacket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InterestPacket_descriptor_;
}

const InterestPacket& InterestPacket::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_interest_5fpacket_2eproto();
  return *default_instance_;
}

InterestPacket* InterestPacket::default_instance_ = NULL;

InterestPacket* InterestPacket::New() const {
  return new InterestPacket;
}

void InterestPacket::Clear() {
  interests_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InterestPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 interests = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_interests:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_interests())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_interests())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_interests;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void InterestPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated int32 interests = 1;
  for (int i = 0; i < this->interests_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->interests(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* InterestPacket::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated int32 interests = 1;
  for (int i = 0; i < this->interests_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(1, this->interests(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int InterestPacket::ByteSize() const {
  int total_size = 0;

  // repeated int32 interests = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->interests_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->interests(i));
    }
    total_size += 1 * this->interests_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InterestPacket::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InterestPacket* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InterestPacket*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InterestPacket::MergeFrom(const InterestPacket& from) {
  GOOGLE_CHECK_NE(&from, this);
  interests_.MergeFrom(from.interests_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InterestPacket::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InterestPacket::CopyFrom(const InterestPacket& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InterestPacket::IsInitialized() const {

  return true;
}

void InterestPacket::Swap(InterestPacket* other) {
  if (other != this) {
    interests_.Swap(&other->interests_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InterestPacket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InterestPacket_descriptor_;
  metadata.reflection = InterestPacket_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace node

// @@protoc_insertion_point(global_scope)
