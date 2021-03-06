// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transportinstruction.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_transportinstruction_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_transportinstruction_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_transportinstruction_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_transportinstruction_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace TransportBuffers {
class Instruction;
class InstructionDefaultTypeInternal;
extern InstructionDefaultTypeInternal _Instruction_default_instance_;
}  // namespace TransportBuffers
PROTOBUF_NAMESPACE_OPEN
template<> ::TransportBuffers::Instruction* Arena::CreateMaybeMessage<::TransportBuffers::Instruction>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TransportBuffers {

// ===================================================================

class Instruction final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:TransportBuffers.Instruction) */ {
 public:
  Instruction();
  virtual ~Instruction();

  Instruction(const Instruction& from);
  Instruction(Instruction&& from) noexcept
    : Instruction() {
    *this = ::std::move(from);
  }

  inline Instruction& operator=(const Instruction& from) {
    CopyFrom(from);
    return *this;
  }
  inline Instruction& operator=(Instruction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Instruction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Instruction* internal_default_instance() {
    return reinterpret_cast<const Instruction*>(
               &_Instruction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Instruction* other);
  friend void swap(Instruction& a, Instruction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Instruction* New() const final {
    return CreateMaybeMessage<Instruction>(nullptr);
  }

  Instruction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Instruction>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const Instruction& from);
  void MergeFrom(const Instruction& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Instruction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TransportBuffers.Instruction";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes diff = 6;
  bool has_diff() const;
  void clear_diff();
  static const int kDiffFieldNumber = 6;
  const std::string& diff() const;
  void set_diff(const std::string& value);
  void set_diff(std::string&& value);
  void set_diff(const char* value);
  void set_diff(const void* value, size_t size);
  std::string* mutable_diff();
  std::string* release_diff();
  void set_allocated_diff(std::string* diff);

  // optional bytes chaff = 7;
  bool has_chaff() const;
  void clear_chaff();
  static const int kChaffFieldNumber = 7;
  const std::string& chaff() const;
  void set_chaff(const std::string& value);
  void set_chaff(std::string&& value);
  void set_chaff(const char* value);
  void set_chaff(const void* value, size_t size);
  std::string* mutable_chaff();
  std::string* release_chaff();
  void set_allocated_chaff(std::string* chaff);

  // optional uint64 old_num = 2;
  bool has_old_num() const;
  void clear_old_num();
  static const int kOldNumFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::uint64 old_num() const;
  void set_old_num(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint64 new_num = 3;
  bool has_new_num() const;
  void clear_new_num();
  static const int kNewNumFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::uint64 new_num() const;
  void set_new_num(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint64 ack_num = 4;
  bool has_ack_num() const;
  void clear_ack_num();
  static const int kAckNumFieldNumber = 4;
  ::PROTOBUF_NAMESPACE_ID::uint64 ack_num() const;
  void set_ack_num(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint64 throwaway_num = 5;
  bool has_throwaway_num() const;
  void clear_throwaway_num();
  static const int kThrowawayNumFieldNumber = 5;
  ::PROTOBUF_NAMESPACE_ID::uint64 throwaway_num() const;
  void set_throwaway_num(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 protocol_version = 1;
  bool has_protocol_version() const;
  void clear_protocol_version();
  static const int kProtocolVersionFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::uint32 protocol_version() const;
  void set_protocol_version(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:TransportBuffers.Instruction)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr diff_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr chaff_;
  ::PROTOBUF_NAMESPACE_ID::uint64 old_num_;
  ::PROTOBUF_NAMESPACE_ID::uint64 new_num_;
  ::PROTOBUF_NAMESPACE_ID::uint64 ack_num_;
  ::PROTOBUF_NAMESPACE_ID::uint64 throwaway_num_;
  ::PROTOBUF_NAMESPACE_ID::uint32 protocol_version_;
  friend struct ::TableStruct_transportinstruction_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Instruction

// optional uint32 protocol_version = 1;
inline bool Instruction::has_protocol_version() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Instruction::clear_protocol_version() {
  protocol_version_ = 0u;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Instruction::protocol_version() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.protocol_version)
  return protocol_version_;
}
inline void Instruction::set_protocol_version(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000040u;
  protocol_version_ = value;
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.protocol_version)
}

// optional uint64 old_num = 2;
inline bool Instruction::has_old_num() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Instruction::clear_old_num() {
  old_num_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Instruction::old_num() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.old_num)
  return old_num_;
}
inline void Instruction::set_old_num(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  old_num_ = value;
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.old_num)
}

// optional uint64 new_num = 3;
inline bool Instruction::has_new_num() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Instruction::clear_new_num() {
  new_num_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Instruction::new_num() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.new_num)
  return new_num_;
}
inline void Instruction::set_new_num(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000008u;
  new_num_ = value;
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.new_num)
}

// optional uint64 ack_num = 4;
inline bool Instruction::has_ack_num() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Instruction::clear_ack_num() {
  ack_num_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Instruction::ack_num() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.ack_num)
  return ack_num_;
}
inline void Instruction::set_ack_num(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000010u;
  ack_num_ = value;
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.ack_num)
}

// optional uint64 throwaway_num = 5;
inline bool Instruction::has_throwaway_num() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Instruction::clear_throwaway_num() {
  throwaway_num_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Instruction::throwaway_num() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.throwaway_num)
  return throwaway_num_;
}
inline void Instruction::set_throwaway_num(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000020u;
  throwaway_num_ = value;
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.throwaway_num)
}

// optional bytes diff = 6;
inline bool Instruction::has_diff() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Instruction::clear_diff() {
  diff_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Instruction::diff() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.diff)
  return diff_.GetNoArena();
}
inline void Instruction::set_diff(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  diff_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.diff)
}
inline void Instruction::set_diff(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  diff_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TransportBuffers.Instruction.diff)
}
inline void Instruction::set_diff(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  diff_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TransportBuffers.Instruction.diff)
}
inline void Instruction::set_diff(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  diff_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TransportBuffers.Instruction.diff)
}
inline std::string* Instruction::mutable_diff() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:TransportBuffers.Instruction.diff)
  return diff_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Instruction::release_diff() {
  // @@protoc_insertion_point(field_release:TransportBuffers.Instruction.diff)
  if (!has_diff()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return diff_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Instruction::set_allocated_diff(std::string* diff) {
  if (diff != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  diff_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), diff);
  // @@protoc_insertion_point(field_set_allocated:TransportBuffers.Instruction.diff)
}

// optional bytes chaff = 7;
inline bool Instruction::has_chaff() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Instruction::clear_chaff() {
  chaff_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Instruction::chaff() const {
  // @@protoc_insertion_point(field_get:TransportBuffers.Instruction.chaff)
  return chaff_.GetNoArena();
}
inline void Instruction::set_chaff(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  chaff_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TransportBuffers.Instruction.chaff)
}
inline void Instruction::set_chaff(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  chaff_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TransportBuffers.Instruction.chaff)
}
inline void Instruction::set_chaff(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  chaff_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TransportBuffers.Instruction.chaff)
}
inline void Instruction::set_chaff(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  chaff_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TransportBuffers.Instruction.chaff)
}
inline std::string* Instruction::mutable_chaff() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:TransportBuffers.Instruction.chaff)
  return chaff_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Instruction::release_chaff() {
  // @@protoc_insertion_point(field_release:TransportBuffers.Instruction.chaff)
  if (!has_chaff()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return chaff_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Instruction::set_allocated_chaff(std::string* chaff) {
  if (chaff != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  chaff_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), chaff);
  // @@protoc_insertion_point(field_set_allocated:TransportBuffers.Instruction.chaff)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace TransportBuffers

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_transportinstruction_2eproto
